#include <sstream>

using namespace std;

int main()
{
 std::stringstream t;
 t << "x = " << 7 << "." << true << std::endl; // any type is compatable
 string s;
 s = sout.str(); // cast stream to string
 return 0;
}
