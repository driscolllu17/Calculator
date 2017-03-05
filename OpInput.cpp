#include <iostream>

char operator_input()
{
    std::cout << "Enter an operator(+ - * /) ";
    char op;
    std::cin >> op;
    return op;
}
