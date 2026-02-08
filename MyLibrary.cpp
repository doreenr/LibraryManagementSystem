#include "MyLibrary.h"
#include <iostream>

MyLibrary::MyLibrary() {
    std::cout << "Library system initialized" << std::endl;
}

void MyLibrary::add_book(Book* book) {
    this->book_repository.add_book(book);
}

void MyLibrary::register_member(Member* member) {
    this->members.push_back(member);
    std::cout << "Member registered: " << member->get_name() 
              << " (ID: " << member->get_member_id() << ")" << std::endl;
}

Member* MyLibrary::find_member_by_id(std::string member_id) {
    for (Member* member : this->members) {
        if (member->get_member_id() == member_id) {
            return member;
        }
    }
    return nullptr;
}

void MyLibrary::borrow_book(std::string member_id, std::string isbn) {
    Member* member = this->find_member_by_id(member_id);
    Book* book = this->book_repository.find_book_by_isbn(isbn);
    
    if (member == nullptr) {
        std::cout << "Error: Member not found (ID: " << member_id << ")" << std::endl;
        return;
    }
    
    if (book == nullptr) {
        std::cout << "Error: Book not found (ISBN: " << isbn << ")" << std::endl;
        return;
    }
    
    // Association: Member borrows book through the library
    member->borrow_book(book);
}

void MyLibrary::return_book(std::string member_id, std::string isbn) {
    Member* member = this->find_member_by_id(member_id);
    Book* book = this->book_repository.find_book_by_isbn(isbn);
    
    if (member == nullptr) {
        std::cout << "Error: Member not found (ID: " << member_id << ")" << std::endl;
        return;
    }
    
    if (book == nullptr) {
        std::cout << "Error: Book not found (ISBN: " << isbn << ")" << std::endl;
        return;
    }
    
    // For now, just print confirmation (full implementation would remove from member's list)
    std::cout << member->get_name() << " returned: " << book->get_title() << std::endl;
}

void MyLibrary::display_all_books() {
    std::cout << "\n--- Library Catalog ---" << std::endl;
    std::vector<Book*> all_books = this->book_repository.get_all_books();
    
    if (all_books.empty()) {
        std::cout << "No books in library" << std::endl;
        return;
    }
    
    for (Book* book : all_books) {
        std::cout << "- " << book->get_title() 
                  << " by " << book->get_author() 
                  << " (ISBN: " << book->get_isbn() << ")" << std::endl;
    }
}
