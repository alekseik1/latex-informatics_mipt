#include <iostream>

int absolute(int x) // for int
{
    std::cout << "Call for int" << "\n";
    if(x < 0)
        return -x;
    else
        return x;
}

double absolute(double x)   // for double
{
    std::cout << "Call for double" << "\n";
    return ((x > 0) ? x : -x);
}

long absolute(long x)    // for long
{
    std::cout << "Call for long" << "\n";
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
