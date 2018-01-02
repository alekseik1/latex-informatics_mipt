#include<iostream>

using namespace std;

//int k2 = 0;

void count2()
{
 static int k3 = 0;
 k3 ++ ;
 cout << k3 << endl;
}

void reducer()
{
 k3--; // won't work, k3 is not defined in this block
}

int main()
{
 count2();
 reducer();
 // any your staff ..
}

// Recursive func sample
void count(int n)
{
 int k = 1;
 if(n > 0)
  count(n-1);
}
