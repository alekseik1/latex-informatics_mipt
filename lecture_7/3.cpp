#include <algorithm>

int main()
{
    vector<int> A = {10, 9, 15, 7, 20};
    //for_each(A.begin(), A.end(), foobar);
    for(auto x : A) {
        x = x*2
        std::cout << x;
    }
}
