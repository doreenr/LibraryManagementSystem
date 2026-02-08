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
