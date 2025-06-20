#include "h_TableMemoryManagement.hpp"

// definitions of Table class

Table::Table(int num): number(num), isAvailable(true){
    
}
//setters:
void Table::reserve(){ 
    isAvailable = false;
}
void Table::release(){
    isAvailable = true;
}
//getters:
bool Table::getIsAvailable() const{
    return isAvailable;
}
int Table::getNumber() const{
    return number;
}

// 36.1
void Table::assignCustomer(const std::shared_ptr<Customer>& customer){
    currentCustomer = customer;
}

// 36.1.2
void Table::removeCustomer(){
    currentCustomer.reset();
}

// 36.1.3
std::shared_ptr<Customer> Table::getCurrentCustomer() const{
    return currentCustomer;
}
