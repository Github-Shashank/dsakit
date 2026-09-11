#ifndef DSA_LINKED_LIST_H
#define DSA_LINKED_LIST_H

#include <cstddef>

namespace dsa
{

template <typename T>
class LinkedList
{
    private:
    
    struct Node
    {
        T data;
        Node* next;

        Node(const T& value, Node* next = nullptr)
        : data(value), next(next) {}
    };
    
    Node *head_;
    Node *tail_;
    std::size_t size_;

    public:

    // Constructor
    LinkedList();

    // Destructor
    ~LinkedList();

    // Capacity
    std::size_t size() const;
    bool empty() const;

    // Insertion
    void push_front(const T&);
    void push_back(const T&);

    // Utility
    void clear();

    void iterate(std::ostream& = std::cout) const;

};

}

template <typename T>
std::ostream& operator<<(std::ostream&, const dsa::LinkedList<T>&);

#include "dsa/linked_list.tpp"

#endif 