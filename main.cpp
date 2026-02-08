#include <iostream>
#include "Book.h"
#include "RegularMember.h"
#include "PremiumMember.h"

int main() {
    // Create some books
    Book book1("Tao Te Ching", "Lao Tzu", "978-0061142666");
    Book book2("The Way of the White Clouds", "Anagarika Govinda", "978-1590308349");
    Book book3("Too Close to the Falls: A Memoir", "Catherine Gildiner", "978-0143050643");
    Book book4("The Prophet", "Kahlil Gibran", "978-0394404288");
    Book book5("The Noodle Maker of Kalimpong: The Untold Story of My Struggle for Tibet", "Gyalo Thondup", "978-1610397025");
    
    // Create members - 2 Regular, 2 Premium
    RegularMember anna("Anna", "R001");
    PremiumMember ava("Ava", "P001");
    RegularMember anton("Anton", "R002");
    PremiumMember arthur("Arthur", "P002");
    
    std::cout << "\n--- Anna (Regular Member - max 3 books) ---" << std::endl;
    std::cout << anna.get_name() << " (ID: " << anna.get_member_id() 
              << ") can borrow up to " << anna.get_max_books() << " books" << std::endl;
    anna.borrow_book(&book1);
    anna.borrow_book(&book2);
    anna.borrow_book(&book3);
    anna.borrow_book(&book4);  // Should fail - exceeds limit
    
    std::cout << "\n--- Ava (Premium Member - max 5 books) ---" << std::endl;
    std::cout << ava.get_name() << " (ID: " << ava.get_member_id() 
              << ") can borrow up to " << ava.get_max_books() << " books" << std::endl;
    ava.borrow_book(&book1);
    ava.borrow_book(&book2);
    ava.borrow_book(&book3);
    ava.borrow_book(&book4);
    ava.borrow_book(&book5);
    
    std::cout << "\n--- Anton (Regular Member - max 3 books) ---" << std::endl;
    std::cout << anton.get_name() << " (ID: " << anton.get_member_id() 
              << ") can borrow up to " << anton.get_max_books() << " books" << std::endl;
    anton.borrow_book(&book1);
    anton.borrow_book(&book3);
    anton.borrow_book(&book5);
    
    std::cout << "\n--- Arthur (Premium Member - max 5 books) ---" << std::endl;
    std::cout << arthur.get_name() << " (ID: " << arthur.get_member_id() 
              << ") can borrow up to " << arthur.get_max_books() << " books" << std::endl;
    arthur.borrow_book(&book2);
    arthur.borrow_book(&book4);
    
    return 0;
}
