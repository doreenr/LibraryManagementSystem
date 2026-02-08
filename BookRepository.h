#ifndef BOOKREPOSITORY_H
#define BOOKREPOSITORY_H
#include <vector>
#include <string>
#include "Book.h"

class BookRepository {
private:
    std::vector<Book*> books;

public:
    BookRepository();
    
    void add_book(Book* book);
    Book* find_book_by_isbn(std::string isbn);
    std::vector<Book*> get_all_books() const;
    
    ~BookRepository() = default;
};

#endif //BOOKREPOSITORY_H
