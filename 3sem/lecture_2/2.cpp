double x;
int a = 2, b = 5;
x = b/a; // NOT DOUBLE without casting

x = double(b)/double(a); // explicit casting 

x = b; // auto convert b to double, then will write to x
