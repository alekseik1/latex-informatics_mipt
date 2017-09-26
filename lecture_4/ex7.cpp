#include<iostream>

//void squarer(A);

// TODO: func must take widh and height, fix it
void printer(double A[][4])
{
    for(int k = 0;k < 3; k++)
    {
        for(int j = 0; j < 4; j++)
            std::cout << A[k][j] << '\t';
        std::cout << '\n';
    }
}

int main()
{
    int width = 4, height = 3;
    double **A = nullptr;
    A = new double*[height];
    for(int k = 0; k < height; k++)
        A[k] = new double[width];

    for(int k = 0; k < height; k++)
        for(int j = 0; j < width; j++)
            A[k][j] = 1 + k*width + j;

    printer(A);

    for(int k = 0; k < height; k++)
        delete[] A[k];
    delete A;

    return 0;
}
