#include<iostream>

using namespace std;

void count(int n)
{
 int k = 1;
 while(k <= n)
 {
  cout << k << " ";
  k++;
 }
 cout << "\n";
}

int main()
{
 count(5);
 count(10);
}
