#include "RegularMember.h"

RegularMember::RegularMember(std::string name, std::string member_id):
    Member(name, member_id) {}

bool RegularMember::can_borrow_more() const {
    return this->get_borrowed_books().size() < MAX_BOOKS;
}

int RegularMember::get_max_books() const {
    return MAX_BOOKS;
}
