#include <iostream>
#include <string>
#include "linkedList.hpp"

int main()
{
    LinkedList<std::string> str_list;
    list_init(str_list);

    list_insert(str_list, std::string("World"));
    list_insert(str_list, std::string("Hello"));
    list_insert(str_list, std::string("First"));
    list_print(str_list);

    list_destroy(str_list);

    return 0;
}
