#include<iostream>

void squarer(int* B, const int& B_size)
{
    for(int k = 0; k < B_size; k++) {
        B[k] = B[k] * B[k];
    }
}

int main()
{
    int A[5];
    squarer(A, 5);
    return 0;
}
