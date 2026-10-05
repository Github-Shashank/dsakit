// #include <iostream>
// #include <stdexcept>
// #include "dsa/stack.hpp"

// int main()
// {
//     dsa::Stack<int> stack;

//     if (!stack.empty())
//     {
//         std::cout << "FAIL: new stack should be empty\n";
//         return 1;
//     }

//     if (stack.size() != 0)
//     {
//         std::cout << "FAIL: initial size should be 0\n";
//         return 1;
//     }

//     stack.push(10);
//     stack.push(20);
//     stack.push(30);

//     if (stack.size() != 3)
//     {
//         std::cout << "FAIL: size after push\n";
//         return 1;
//     }

//     if (stack.top() != 30)
//     {
//         std::cout << "FAIL: LIFO top\n";
//         return 1;
//     }

//     stack.pop();

//     if (stack.top() != 20)
//     {
//         std::cout << "FAIL: pop did not remove top\n";
//         return 1;
//     }

//     stack.pop();

//     if (stack.top() != 10)
//     {
//         std::cout << "FAIL: second pop\n";
//         return 1;
//     }

//     stack.pop();

//     if (!stack.empty() || stack.size() != 0)
//     {
//         std::cout << "FAIL: stack should be empty\n";
//         return 1;
//     }

//     try
//     {
//         stack.pop();

//         std::cout << "FAIL: pop should throw on empty stack\n";
//         return 1;
//     }
//     catch (const std::out_of_range&)
//     {
//     }

//     try
//     {
//         stack.top();

//         std::cout << "FAIL: top should throw on empty stack\n";
//         return 1;
//     }
//     catch (const std::out_of_range&)
//     {
//     }

//     stack.push(100);
//     stack.push(200);
//     stack.push(300);

//     stack.clear();

//     if (!stack.empty() || stack.size() != 0)
//     {
//         std::cout << "FAIL: clear\n";
//         return 1;
//     }

//     stack.push(400);

//     if (stack.top() != 400 || stack.size() != 1)
//     {
//         std::cout << "FAIL: stack unusable after clear\n";
//         return 1;
//     }

//     std::cout << "All Stack tests passed!\n";

//     return 0;
// }