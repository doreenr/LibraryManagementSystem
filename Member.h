#ifndef MEMBER_H
#define MEMBER_H
#include <string>
#include <vector>
#include "Book.h"

class Member {
private:
    std::string name;
    std::string member_id;
    std::vector<Book*> borrowed_books;

public:
    Member(std::string name, std::string member_id);
    
    // Getters
    std::string get_name() const;
    std::string get_member_id() const;
    std::vector<Book*> get_borrowed_books() const;
    
    // Virtual methods
    virtual bool can_borrow_more() const = 0;  // Pure virtual (abstract)
    virtual int get_max_books() const = 0;     // Pure virtual (abstract)
    void borrow_book(Book* book);
    
    virtual ~Member();
};

#endif //MEMBER_H
