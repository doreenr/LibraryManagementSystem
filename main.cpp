#include <iostream>
#include "Book.h"

int main() {
    Book book1("1984", "George Orwell", "978-0451524935");
    
    std::cout << "Book: " << book1.get_title() 
              << " by " << book1.get_author()
              << " (ISBN: " << book1.get_isbn() << ")" << std::endl;
    
    return 0;
}
