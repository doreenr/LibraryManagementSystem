#include "Book.h"

// Constructor using initializer list
Book::Book(std::string title, std::string author, std::string isbn):
    title(title),
    author(author),
    isbn(isbn) {}

// Getters
std::string Book::get_title() const {
    return this->title;
}

std::string Book::get_author() const {
    return this->author;
}

std::string Book::get_isbn() const {
    return this->isbn;
}

// Setters
void Book::set_title(std::string title) {
    this->title = title;
}

void Book::set_author(std::string author) {
    this->author = author;
}

void Book::set_isbn(std::string isbn) {
    this->isbn = isbn;
}
