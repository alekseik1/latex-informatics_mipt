class Base
{
public:
  void b_pub() {}
private:
  void b_priv() {}
protected:
  void b_prot() {}
};

class Derivative: public Base
{
public:
    void d_pub() {
        b_pub();
        b_prot();
    }
};

void foo(Base& x) {
    x.b_pub(); // x is considered to be from Base
    // Equal to:
    x.Base::b_pub();
}

int main()
{
    Derivative d;
    foo(d);  // Will call b_pub from Base!
}
