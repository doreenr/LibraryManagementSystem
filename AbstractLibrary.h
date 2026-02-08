#ifndef ABSTRACTLIBRARY_H
#define ABSTRACTLIBRARY_H
#include <string>
#include "Book.h"
#include "Member.h"

class AbstractLibrary {
public:
    // Pure virtual methods (abstract interface)
    virtual void add_book(Book* book) = 0;
    virtual void borrow_book(std::string member_id, std::string isbn) = 0;
    virtual void return_book(std::string member_id, std::string isbn) = 0;
    
    // Virtual destructor
    virtual ~AbstractLibrary() = default;
};

#endif //ABSTRACTLIBRARY_H
