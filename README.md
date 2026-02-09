# Library Management System

This mini-project is there to demonstrate the following concepts:
1. **Encapsulation** -> Setting up a Book class with private attributes and public getters/setters
2. **Inheritance** -> Setting up tiered membership: RegularMember & PremiumMember 
3. **Abstraction** -> AbstractLibrary with pure virtual methods
4. **Composition** -> MyLibrary owns BookRepository
5. **Aggregation** -> BookRepository manages Books; MyLibrary manages Members
6. **Association** -> Members interact with Library to borrow books

## Build Instructions
```
mkdir build
cd build
cmake ..
make
```

## Run
```
./LibraryManagementSystem
```

## Usage Example

The program can do the following:
1. Create a library system
2. Add books to the library catalog
3. Registering members (Regular and Premium)
4. Borrowing books (with limits)
5. Returning books
6. Automatic cleanup with destructors

## Features

- **Regular Members**: Can borrow up to 3 books
- **Premium Members**: Can borrow up to 5 books
- **Book Repository**: Centralized book management
- **ISBN-based Search**: Fast book lookup by ISBN
- **Member ID System**: Unique member identification
