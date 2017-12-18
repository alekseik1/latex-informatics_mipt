#include <iostream>

template<int number>
void self_counter()
{
    static int32_t counter = 0;
    counter++;
    std::cout << "Was called: " << counter << " times";
}

int main()
{
    //self_counter(); // --> No, it won't work
    self_counter<1>();
    self_counter<1>();
    self_counter<1>();
    self_counter<2>();
    self_counter<2>();
    return 0;
}
