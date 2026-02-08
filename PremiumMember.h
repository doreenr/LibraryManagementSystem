#ifndef PREMIUMMEMBER_H
#define PREMIUMMEMBER_H
#include "Member.h"

class PremiumMember : public Member {
private:
    static const int MAX_BOOKS = 5;

public:
    PremiumMember(std::string name, std::string member_id);
    
    bool can_borrow_more() const override;
    int get_max_books() const override;
    
    ~PremiumMember() override = default;
};

#endif //PREMIUMMEMBER_H
