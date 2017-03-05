#include <iostream>
#include "Header.h"

int main()
{
    // Assigning 'a' and 'b' to = the numbers the user enters into the calculator, and finding out if user want +, -, *, or /.
    float a = input();
    char op = operator_input();
    float b = input();

    // Deciding which operator to use based on user's input.
    operator_chooser(op, a, b);

    stop();
    return 0;
}
