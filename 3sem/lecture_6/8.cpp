void foo(int x = 0, int y = 0, int z = 0)
{
    std::cout << x << y << z << std::endl;
}
// Can be called in these ways
foo()                // 000
foo(1)              //100
foo(1, 2)         // 120
foo(1, 2, 3)    // 123
