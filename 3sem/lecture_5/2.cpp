#include <string>
#include <iostream>

int main()
{
 std::string s("Hello");
 for(int k=0; k < s.size(); k++)
  std::cout << s[k] << std::endl;
}
