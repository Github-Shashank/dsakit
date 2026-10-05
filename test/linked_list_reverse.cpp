// #include <iostream>
// #include <stdexcept>
// #include "dsa/linked_list.hpp"

// int main()
// {
//     // Empty list
//     {
//         dsa::LinkedList<int> list;

//         list.reverse();

//         if (!list.empty() || list.size() != 0)
//         {
//             std::cout << "FAIL: empty list reverse\n";
//             return 1;
//         }
//     }

//     // Single element
//     {
//         dsa::LinkedList<int> list;

//         list.push_back(10);
//         list.reverse();

//         if (list.size() != 1 || list.front() != 10 || list.back() != 10)
//         {
//             std::cout << "FAIL: single element reverse\n";
//             return 1;
//         }
//     }

//     // Multiple elements
//     {
//         dsa::LinkedList<int> list;

//         list.push_back(10);
//         list.push_back(20);
//         list.push_back(30);
//         list.push_back(40);

//         const std::size_t original_size = list.size();

//         list.reverse();

//         if (list.size() != original_size)
//         {
//             std::cout << "FAIL: size changed after reverse\n";
//             return 1;
//         }

//         if (list.front() != 40)
//         {
//             std::cout << "FAIL: head is incorrect after reverse\n";
//             return 1;
//         }

//         if (list.back() != 10)
//         {
//             std::cout << "FAIL: tail is incorrect after reverse\n";
//             return 1;
//         }

//         list.pop_front();

//         if (list.front() != 30)
//         {
//             std::cout << "FAIL: links are incorrect after reverse\n";
//             return 1;
//         }

//         list.pop_back();

//         if (list.back() != 20)
//         {
//             std::cout << "FAIL: tail links are incorrect after reverse\n";
//             return 1;
//         }
//     }

//     // Reverse twice
//     {
//         dsa::LinkedList<int> list;

//         list.push_back(10);
//         list.push_back(20);
//         list.push_back(30);

//         list.reverse();
//         list.reverse();

//         if (list.front() != 10 || list.back() != 30 || list.size() != 3)
//         {
//             std::cout << "FAIL: double reverse\n";
//             return 1;
//         }
//     }

//     // Reuse list after reverse
//     {
//         dsa::LinkedList<int> list;

//         list.push_back(10);
//         list.push_back(20);
//         list.push_back(30);

//         list.reverse();

//         list.push_front(40);
//         list.push_back(50);

//         if (list.front() != 40 || list.back() != 50 || list.size() != 5)
//         {
//             std::cout << "FAIL: list cannot be used correctly after reverse\n";
//             return 1;
//         }
//     }

//     std::cout << "All LinkedList reverse tests passed!\n";

//     return 0;
// }