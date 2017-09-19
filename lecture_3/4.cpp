#include<iostream>

using namespace std;

//int k2 = 0;

void count2()
{
 static int k3 = 0;
 k3++ ;
 cout << k3 << endl;
 if(n > 0)
  count2(n-1)
 k3--;
}

int main()
{
 count2();
 // any your staff ..
}
