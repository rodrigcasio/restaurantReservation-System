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
This project uses **CMake** build system generator for easy, cross-platform compilation. Follow these steps from the root directory of the project `restaurantReservation-System/`

1. **Ensure CMake is installed:**
- Make sure you have CMake (version 3.1- or higher please) and a C++ compiler (g++ or clang++) installed on your system.

2. **Generate the build system (configure):**
- Create a separated directory for the build files  and run CMake inside it. Keeping source files clean

```bash
mkdir build
cd build
cmake ..
```

3. **Build:**
- Use generated build system (`make` on Unix-like systems) to compile the executable.

```bash 
make
```

4. **Run the program:**
- The executable (ReservationSystem) will be placed inside the `build` directory.

```bash 
./ReservationSystem
```

**IMPORTANT: Note for windows users:**

- Windows developers have two ways to build the project using CMake.
  - **Command line (MSYS2/Cygwin):** If you use an environment like **MSYS2** or **WLS** (Windows Subsystem for Linux), you can follow the **Standard Build** steps above exactly.
  - **Visual Studio:** CMake can generate a Visual Studio solution. Run CMake from your `developer command prompt`, specify the generator:

```bash 
cmake .. -G "Visual Studio 17 2022"
```

Then, open the generated `.sln` file and build within Visual Studio IDE.

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
