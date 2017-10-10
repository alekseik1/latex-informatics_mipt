#include <iostream>

template<int number>
void self_counter()
{
    static int32_t counter = 0;
    counter++;
    std::cout << "Was called: " << counter << " times";
}

template<>
void self_counter<0>;

int main()
{
    //self_counter(); // won't work
    self_counter<1>();
    self_counter<1>();
    self_counter<1>();
    self_counter<2>();
    self_counter<2>();
    self_counter(); // Now without instansiate
    return 0;
}
