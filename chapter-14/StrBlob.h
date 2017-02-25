#ifndef __STRBLOB_H_
#define __STRBLOB_H_

#include <vector>
#include <string>
#include <memory>
#include <initializer_list>
#include <stdexcept>

class StrBlobPtr;

class StrBlob {
    friend class StrBlobPtr;
public:
    using size_type = std::vector<std::string>::size_type;

    // constructor
    StrBlob(): data(std::make_shared<std::vector<std::string>>()) { }
    StrBlob(std::initializer_list<std::string> il):
        data(std::make_shared<std::vector<std::string>>(il)) { }

    // size
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    // add and remove
    void push_back(const std::string &t) { data->push_back(t); }
    void pop_back();

    // element access
    std::string& front();
    std::string& back();

    // interface
    StrBlobPtr begin();
    StrBlobPtr end();

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const;
};

class StrBlobPtr {
    friend bool operator==(const StrBlobPtr&, const StrBlobPtr&);
    friend bool operator!=(const StrBlobPtr&, const StrBlobPtr&);
public:
    StrBlobPtr(): curr(0) { }
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) { }

    std::string& operator*() const;
    std::string* operator->() const;
    StrBlobPtr& operator++();
    StrBlobPtr  operator++(int);
    StrBlobPtr& operator--();
    StrBlobPtr  operator--(int);

private:
    std::shared_ptr<std::vector<std::string>>
        check(std::size_t, const std::string&) const;

    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};

inline
std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check(std::size_t i, const std::string &msg) const {
    auto ret = wptr.lock();
    if (!ret) {
        throw std::runtime_error("unbound StrBlobPtr");
    }
    if (i >= ret->size()) {
        throw std::out_of_range(msg);
    }
    return ret;
}

inline
std::string& StrBlobPtr::operator*() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

inline
std::string* StrBlobPtr::operator->() const {
    return & this->operator*();
}

inline
StrBlobPtr& StrBlobPtr::operator++() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

inline
StrBlobPtr StrBlobPtr::operator++(int) {
    StrBlobPtr ret = *this;
    ++*this;
    return ret;
}

inline
StrBlobPtr& StrBlobPtr::operator--() {
    --curr;
    check(curr, "increment past end of StrBlobPtr");
    return *this;
}

inline
StrBlobPtr StrBlobPtr::operator--(int) {
    StrBlobPtr ret = *this;
    --*this;
    return ret;
}

inline
StrBlobPtr StrBlob::begin() {
    return StrBlobPtr(*this);
}

inline
StrBlobPtr StrBlob::end() {
    return StrBlobPtr(*this, data->size());
}

bool operator==(const StrBlobPtr &lhs, const StrBlobPtr &rhs) {
    auto l = lhs.wptr.lock(), r = rhs.wptr.lock();
    if (l == r) {
        return (!r || lhs.curr == rhs.curr);
    } else {
        return false;
    }
}

bool operator!=(const StrBlobPtr &lhs, const StrBlobPtr &rhs) {
    return !(lhs == rhs);
}

#endif
