#ifndef TABLE_MEMORY_MANAGEMENT_HPP
#define TABLE_MEMORY_MANAGEMENT_HPP
#include <memory>

class Customer;

class Table {
    private:
        int number;
        bool isAvailable;
        std::shared_ptr<Customer> currentCustomer;

    public: 
        explicit Table(int num);
        void reserve();
        void release();
        bool getIsAvailable() const;
        int getNumber() const;
        void assignCustomer(const std::shared_ptr<Customer>& customer); // 36.1
        void removeCustomer(); // 36.1.2
        std::shared_ptr<Customer> getCurrentCustomer() const;
        
};

#endif








/*  Constructor used to create an object allocated on the heap, then
    creating a smart pointer that owns and points to that object, lastly
    we are adding the smart pointer to the vector of tables.

    Restaurant::Restaurant(int initialTableCount) : tableCount(initialTableCount){
        for(int i = 1l i <= initialTableCount; ++i){
            tables.push_back(std::make_unique<Table>(i));   // 
        }
    }
*/