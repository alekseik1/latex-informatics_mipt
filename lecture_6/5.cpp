#include <iostream>

template<typename T>

T absolute(T x)    // That is fine
{
    return (x > 0) ? x : -x;
}

int main()
{
    std::cout << absolute<int32_t>(-8.0) << std::endl;
}
