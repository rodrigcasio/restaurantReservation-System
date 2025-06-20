# RestaurantReservation-System: C++ Console Project

A lightweight C++ console-based system for managing restaurant table reservations, designed to demonstrate the use of **smart pointers** and **memory management** through customer, table, and waitlist handling.

## Features

- **Table Management**: Reserve and release tables, track table availability.
- **Waitlist System**: Automatically add customers to a waitlist when tables are full, and notify them when a table becomes available.
- **Customer Management**: Add customers, track active and waiting customers using smart pointers.
- **Memory Safety**: Uses `unique_ptr`, `shared_ptr`, and `weak_ptr` to manage dynamic memory and avoid leaks.

## C++ Principles

- **Smart Pointers**: Demonstrates `unique_ptr` for exclusive table ownership, `shared_ptr` for active customers, and `weak_ptr` for the waitlist.
- **Encapsulation**: Separates logic into header (`include/`) and source (`src/`) files.
- **Vectors**: Uses `std::vector` for dynamic management of tables and customers.
- **OOP**: Applies object-oriented design for extensibility and clarity.

## Purpose

Developed as part of my C++ learning journey to showcase my understanding of **smart pointers**, **memory management**, and system design. This project builds on my previous work, such as `LibrarySystem` and `SchoolSystem`.

## How to Run

```sh
g++ src/*.cpp -I include -o restaurantReservation
./restaurantReservation
```

## Sample Output

```
Table reserved for customer "Rodrigo Casio" successfully.
Table reserved for customer "John Mayer" successfully.
Table reserved for customer "Rocio Garcia" successfully.
Table reserved for customer "Chris Martin" successfully.
Table reserved for customer "Avril Lavigne" successfully.
Not available tables at the moment, "Albus Dombuldore" added to the waiting-list.
Not available tables at the moment, "Harry Potter" added to the waiting-list.
Not available tables at the moment, "Ron Weisley" added to the waiting-list.
Not available tables at the moment, "Hermione Granger" added to the waiting-list.
Not available tables at the moment, "Severus Snape" added to the waiting-list.
The following people are waiting he table: 
- Albus Dombuldore
- Harry Potter
- Ron Weisley
- Hermione Granger
- Severus Snape
Customer "Albus Dombuldore" was removed from the waiting-list and reserved a table successfully.
```

## Author

Rodrigo Casio ([View my GitHub profile] (https://github.com/rodrigcasio))