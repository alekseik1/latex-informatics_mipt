#include "1.cpp"

void foo(A& p)
{
    p.bar();
}

int main() {
    A a;    // Create class objects
    B b;
    C c;
    foo(b); // ???
    foo(c); // Will this stuff work??
}
