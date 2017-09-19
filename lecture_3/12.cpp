void changer(int* x)
{
 (*x)++;
}

// You can use another construction in C++

void changer1(int& y)
{
    y++;
}


int main()
{
 int x;
 changer(&x);
 changer1(x); // no need for &
 cout << x;
}
