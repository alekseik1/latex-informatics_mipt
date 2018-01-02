double A[100]; // has type `const double*`
double* p = A;
//or
double* p1 = &A[5]
//equals to
double* p1 = A + 5

double* p = new double(5.);
