#include <iostream>

using namespace std;

typedef std::string DataType;

struct tNode
{
    DataType data;
    tNode* next = nullptr;
};

tNode * insert_node(tNode *p_begin, DataType data);

int main()
{

    tNode* p = new tNode;
    p->data = "Hello";
    // Sequently add nodes
    p = insert_node(p, "World");
    p = insert_node(p, "Reverse order");

    while(p) {
        std::cout << p->data << std::endl;
        p = p->next;
    }

    return 0;
}

tNode * insert_node(tNode *p_begin, DataType data)
{
    tNode *p = new tNode;

    p->data = data;
    p->next = p_begin;
    return p;
}
