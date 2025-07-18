# Restaurant Reservation System (C++)

This is a small C++ project I made to practice using smart pointers and memory management. The program simulates a simple restaurant reservation system where you can reserve tables, manage a waitlist, and handle customers using different types of smart pointers.

## Features

- **Table Management**: Reserve and release tables, track table availability.
- **Waitlist System**: Automatically add customers to a waitlist when tables are full, and notify them when a table becomes available.
- **Customer Management**: Add customers, track active and waiting customers using smart pointers.
- **Memory Safety**: Uses `unique_ptr`, `shared_ptr`, and `weak_ptr` to manage dynamic memory and avoid leaks.

## Smart Pointers and Memory Management (in simple terms)

- **unique_ptr**: Used for tables that can only be owned by one customer at a time. This helps prevent memory leaks and makes sure only one person can reserve a table.
- **shared_ptr**: Used for customers who are actively using tables. Multiple parts of the program can "share" the same customer data safely.
- **weak_ptr**: Used for the waitlist. This lets us keep track of waiting customers without keeping them "alive" if they're not needed anymore.
- **Memory Safety**: Smart pointers automatically clean up memory when it's no longer needed, so we don't have to worry about memory leaks.

These helped me learn how to manage memory safely in C++ and avoid common problems.

## Purpose

I made this project to get better at using smart pointers and understanding memory management in C++. It helped me learn how to organize code for a small system and how to use different types of pointers for different situations.

## How to Run

1. Make sure you have a C++ compiler (like g++) installed.
2. Compile the code:
   ```
   g++ src/*.cpp -I include -o restaurantReservation
   ```
3. Run the program:
   ```
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

Rodrigo Casio  
[My GitHub Profile](https://github.com/rodrigcasio)