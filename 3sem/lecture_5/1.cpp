#include <cstring>
#include <iostream>

using namespace std;

int main()
{
 char s1[10000], s2[1000];
 s1[0] = 0;
 std::cin.getline(s2, 1000);
 strcat(s1, s2); // concatanate
}
