#include "Member.h"
#include <iostream>

Member::Member(std::string name, std::string member_id):
    name(name),
    member_id(member_id) {}

Member::~Member() {
    std::cout << "Member " << this->name << " removed from system" << std::endl;
}

std::string Member::get_name() const {
    return this->name;
}

std::string Member::get_member_id() const {
    return this->member_id;
}

std::vector<Book*> Member::get_borrowed_books() const {
    return this->borrowed_books;
}

void Member::borrow_book(Book* book) {
    if (this->can_borrow_more()) {
        this->borrowed_books.push_back(book);
        std::cout << this->name << " borrowed: " << book->get_title() << std::endl;
    } else {
        std::cout << this->name << " cannot borrow more books (limit: " 
                  << this->get_max_books() << ")" << std::endl;
    }
}
