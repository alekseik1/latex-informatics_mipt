#include <iostream>

T absolute(T x)    // Will not work
{
    return (x > 0) ? x : -x;
}

int main()
{
    int a = -5;
    double b = -5.1;
    long c = -1L;

    std::cout << absolute(a) << std::endl;
    std::cout << absolute(b) << std::endl;  // different types
    std::cout << absolute(c) << std::endl;
}
