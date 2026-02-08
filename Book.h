#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;

public:
    Book(std::string title, std::string author, std::string isbn);
    
    // Getters (const methods)
    std::string get_title() const;
    std::string get_author() const;
    std::string get_isbn() const;
    
    // Setters
    void set_title(std::string title);
    void set_author(std::string author);
    void set_isbn(std::string isbn);
};

#endif //BOOK_H
