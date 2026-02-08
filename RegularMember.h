#ifndef REGULARMEMBER_H
#define REGULARMEMBER_H
#include "Member.h"

class RegularMember : public Member {
private:
    static const int MAX_BOOKS = 3;

public:
    RegularMember(std::string name, std::string member_id);
    
    bool can_borrow_more() const override;
    int get_max_books() const override;
    
    ~RegularMember() override = default;
};

#endif //REGULARMEMBER_H
