double* p = new double[50];

for(int k = 0; k < 50; k++)
  p[k] = k*k;

delete[] p;
