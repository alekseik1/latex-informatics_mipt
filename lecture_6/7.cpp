#include <iostream>

template<int number=0>  // Has default value 0
void self_counter()
{
    static int32_t counter = 0;
    counter++;
    std::cout << "Was called: " << counter << " times" << std::endl;
}

int main()
{
    self_counter<1>();
    self_counter<1>();
    self_counter<1>();
    self_counter<2>();
    self_counter<2>();
    self_counter(); // --> Yeah, now without instansiate
    return 0;
}
