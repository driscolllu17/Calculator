#include <iostream>

char operator_input()
{
    // Getting operator form user.
    std::cout << "Enter an operator(+ - * /) ";
    char op;
    std::cin >> op;
    return op;
}
