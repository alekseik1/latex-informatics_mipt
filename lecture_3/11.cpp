int get()
{
 int* p = new int[1000]
 return p;
}

int main()
{
 int* q;
 q = get();
 // ...
 // after your code
 q = get(); // takes another amount of mem
 delete[] q;
}
