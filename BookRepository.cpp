#include "BookRepository.h"
#include <iostream>

BookRepository::BookRepository() {}

void BookRepository::add_book(Book* book) {
    this->books.push_back(book);
    std::cout << "Book added to repository: " << book->get_title() << std::endl;
}

Book* BookRepository::find_book_by_isbn(std::string isbn) {
    for (Book* book : this->books) {
        if (book->get_isbn() == isbn) {
            return book;
        }
    }
    return nullptr;
}

std::vector<Book*> BookRepository::get_all_books() const {
    return this->books;
}
