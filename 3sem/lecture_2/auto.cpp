#include<iostream>

int get_x(); // 'auto x' will be int

double get_x(); // now 'auto x' will be double
// and so on...

int main()
{
  auto x = get_x();
  return 0;
}
