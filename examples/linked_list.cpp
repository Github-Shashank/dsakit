#include <iostream>
#include "dsa/linked_list.hpp"

int main()
{
    dsa::LinkedList<int> list;

    std::cout << list << " size: " << list.size() << std::endl;

    list.push_front(30);
    list.push_front(20);
    list.push_front(10);

    std::cout << list << " size: " << list.size() << std::endl;

    list.push_back(40);
    list.push_back(50);
    list.push_back(60);

    std::cout << list << " size: " << list.size() << std::endl;
    
    list.iterate();
    std::cout << std::endl;
    
    std::cout << list << " size: " << list.size() << std::endl;
    
    std::cout << "Front: " << list.front() << '\n';
    list.front() = 100;
    std::cout << "Front after modification: " << list.front() << std::endl;

    std::cout << list << " size: " << list.size() << std::endl;

    std::cout << "Back: " << list.back() << '\n';
    list.back() = 20;
    std::cout << "Back after modification: " << list.back() << std::endl;

    std::cout << list << " size: " << list.size() << std::endl;

    list.pop_front();

    std::cout << "LinkedList after pop front" << std::endl;
    std::cout << list << " size: " << list.size() << std::endl;

    list.pop_back();
    
    std::cout << "LinkedList after pop back" << std::endl;
    std::cout << list << " size: " << list.size() << std::endl;

    std::cout << "Testing deep copy" << std::endl;

    dsa::LinkedList<int> copy = list.deep_copy(list);

    std::cout << "Original: " << list << " size: " << list.size() << std::endl;
    std::cout << "Copy: " << copy << " size: " << copy.size() << std::endl;

    copy.front() = 999;

    std::cout << "After modifying copy" << std::endl;
    std::cout << "Original: " << list << " size: " << list.size() << std::endl;
    std::cout << "Copy: " << copy << " size: " << copy.size() << std::endl;

    list.clear();
    std::cout << "Cleared LinkedList" << std::endl;
    std::cout << list << " size: " << list.size() << std::endl;

    try
    {
        list.back() = 0;
    }
    catch (const std::out_of_range& e)
    {
        std::cout << "Exception: " << e.what() << '\n';
    }

    try
    {
        list.front() = 0;
    }
    catch (const std::out_of_range& e)
    {
        std::cout << "Exception: " << e.what() << '\n';
    }

    try
    {
        list.pop_front();
    }
    catch (const std::out_of_range& e)
    {
        std::cout << "Exception: " << e.what() << '\n';
    }

    try
    {
        list.pop_back();
    }
    catch (const std::out_of_range& e)
    {
        std::cout << "Exception: " << e.what() << '\n';
    }

    return 0;
}