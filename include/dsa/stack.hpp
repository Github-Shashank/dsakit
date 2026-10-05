// #ifndef DSA_STACK_HPP
// #define DSA_STACK_HPP

// #include <cstddef>
// #include <stdexcept>

// namespace dsa
// {

// template <typename T>
// class Stack
// {
// private:
//     struct Node
//     {
//         T data;
//         Node* next;

//         Node(const T& value, Node* next = nullptr);
//     };

//     Node* head_;
//     std::size_t size_;

// public:
//     Stack();
//     ~Stack();

//     void push(const T& value);
//     void pop();

//     T& top();
//     const T& top() const;

//     bool empty() const;
//     std::size_t size() const;

//     void clear();
// };

// }

// #include "dsa/stack.tpp"

// #endif