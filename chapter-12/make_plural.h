#ifndef __MAKE_PLURAL_H_
#define __MAKE_PLURAL_H_

#include <string>

inline std::string make_plural(size_t ctr,
                const std::string &word, const std::string &ending) {
    return (ctr > 1) ? word + ending : word;
}

#endif
