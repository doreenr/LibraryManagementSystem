//
// MyLibrary.h
// Library Management System
//

#define MYLIBRARY_H
#include <vector>
#include <string>
#include "AbstractLibrary.h"
#include "BookRepository.h"
#include "Member.h"
#include "Book.h"

class MyLibrary : public AbstractLibrary {
private:
    BookRepository book_repository;  // Composition: MyLibrary owns BookRepository
    std::vector<Member*> members;    // Aggregation: Members exist independently

public:
    MyLibrary();
    
    // Implement abstract methods from AbstractLibrary
    void add_book(Book* book) override;
    void borrow_book(std::string member_id, std::string isbn) override;
    void return_book(std::string member_id, std::string isbn) override;
    
    // Additional methods
    void register_member(Member* member);
    Member* find_member_by_id(std::string member_id);
    void display_all_books();
    
    ~MyLibrary() override = default;
};

#endif //MYLIBRARY_H
