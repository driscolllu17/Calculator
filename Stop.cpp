#include <iostream>

void stop()
{
    // So program does not close before the output can be read.
    int x;
    std::cin >> x;
}
