#include<iostream>

 struct A
 {
     char x;
     void bar() {
         std::cout << "A";
    )
};

struct B : A    // struct inheritance is always public
{
    int y;
    void bar() {
        std::cout << "B";
    }
};

struct C: A
{
    double z;
    void bar() {
        std::cout << "C";
    }
}
