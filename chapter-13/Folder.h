#ifndef __FOLDER_H_
#define __FOLDER_H_

#include <string>
#include <set>

class Folder;

class Message {
    friend void swap(Message&, Message&);
    friend class Folder;

public:
    explicit Message(const std::string &str = ""):
        contents(str) { }

    // copy control
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    Message(Message&&);
    Message& operator=(Message&&);

#endif
