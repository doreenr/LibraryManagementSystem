#include <iostream>
#include "Book.h"
#include "RegularMember.h"
#include "PremiumMember.h"
#include "MyLibrary.h"

int main() {
    // Create library
    MyLibrary library;
    
    std::cout << "\n= Add books to the library =" << std::endl;
    // Create books
    Book book1("Tao Te Ching", "Lao Tzu", "978-0061142666");
    Book book2("The Way of the White Clouds", "Anagarika Govinda", "978-1590308349");
    Book book3("Too Close to the Falls: A Memoir", "Catherine Gildiner", "978-0143050643");
    Book book4("The Prophet", "Kahlil Gibran", "978-0394404288");
    Book book5("The Noodle Maker of Kalimpong: The Untold Story of My Struggle for Tibet", "Gyalo Thondup", "978-1610397025");
    
    // Add books to library
    library.add_book(&book1);
    library.add_book(&book2);
    library.add_book(&book3);
    library.add_book(&book4);
    library.add_book(&book5);
    
    // Display all books
    library.display_all_books();
    
    std::cout << "\n= Adding members =" << std::endl;
    // Create members
    RegularMember anna("Anna", "R001");
    PremiumMember ava("Ava", "P001");
    RegularMember anton("Anton", "R002");
    PremiumMember arthur("Arthur", "P002");
    
    // Register members with library
    library.register_member(&anna);
    library.register_member(&ava);
    library.register_member(&anton);
    library.register_member(&arthur);
    
    std::cout << "\n= Members borrowing books  =" << std::endl;
    
    std::cout << "\n--- Anna (Regular Member) ---" << std::endl;
    library.borrow_book("R001", "978-0061142666");  // Tao Te Ching
    library.borrow_book("R001", "978-1590308349");  // White Clouds
    library.borrow_book("R001", "978-0143050643");  // Too Close to Falls
    library.borrow_book("R001", "978-0394404288");  // Should fail - limit reached
    
    std::cout << "\n--- Ava (Premium Member) ---" << std::endl;
    library.borrow_book("P001", "978-0061142666");  // Tao Te Ching
    library.borrow_book("P001", "978-1590308349");  // White Clouds
    library.borrow_book("P001", "978-0143050643");  // Too Close to Falls
    library.borrow_book("P001", "978-0394404288");  // The Prophet
    library.borrow_book("P001", "978-1610397025");  // Noodle Maker
    
    std::cout << "\n--- Anton (Regular Member) ---" << std::endl;
    library.borrow_book("R002", "978-0394404288");  // The Prophet
    library.borrow_book("R002", "978-1610397025");  // Noodle Maker
    
    std::cout << "\n= Member returning books =" << std::endl;
    library.return_book("R001", "978-0061142666");  // Anna returns Tao Te Ching
    library.return_book("P001", "978-1590308349");  // Ava returns White Clouds
    
    std::cout << "\n= Porgram terminates =" << std::endl;
    return 0;
}
