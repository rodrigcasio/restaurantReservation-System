#include <vector>
#include <string>
#include <algorithm>
#include <memory>
#include <iostream>
#include "h_CustomerMemoryManagement.hpp"


// function to erease an element from a vector of weak_pt.

void removeElement(std::vector<std::weak_ptr<Customer>>& vec, const std::weak_ptr<Customer>& ptr){
    vec.erase(std::remove_if(vec.begin(), vec.end(), [&ptr](const std::weak_ptr<Customer>& element){
        return !element.owner_before(ptr) && !ptr.owner_before(element);
        }), 
    vec.end());
}

// function to remove the shared_ptr from the activeCustomers vector

void removeSharedElemen(std::vector<std::shared_ptr<Customer>>& vect, const std::shared_ptr<Customer>& ptr2){
    vect.erase(std::remove_if(vect.begin(), vect.end(), [&ptr2](const std::shared_ptr<Customer>& element){
        return !element.owner_before(ptr2) && !ptr2.owner_before(element);
    }),
    vect.end());
}

// new functions:

// 1. erase()
// 2. remove_if()
// 3. owner_before()
