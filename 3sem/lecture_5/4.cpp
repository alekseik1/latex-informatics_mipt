#include <fstream>
#include <iostream>

using namespace std;

void read_array(int *A, int A_size, string f_name)
{
 ifstream fin(f_name); // input stream based on file
 for(int k=0; k < A_size; k++)
  fin >> A[k];
}
