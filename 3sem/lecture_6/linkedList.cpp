#include <iostream>
#include <string>

template<typename DataType>
struct tNode
{
    DataType data;
    tNode* next = nullptr;
};

template<typename DataType>
tNode<DataType> * insert_node(tNode<DataType> *p_begin, DataType data)
{
    tNode<DataType> *p = new tNode<DataType>;
    p->data = data;
    p->next = p_begin;
    return p;
}

int main()
{
    tNode<std::string> *p_begin = nullptr;

    p_begin = insert_node(p_begin, std::string("Hello"));
    p_begin = insert_node(p_begin, std::string("World"));
    return 0;
}
