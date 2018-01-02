class Base
{
public:
    void b_pub() {}
private:
    void b_priv() {}
protected:
    void b_prot() {}
};

class Derivative: public Base // 'public' -- see descr.
{
public:
    void d_pub() {
        // We now have all methods from Base
        b_pub();    // We are calling OWN b_pub(). It exists
        b_prot();   // Child has access to protected section
    }
};
int main() {
    Base b;
    b.b_pub();  // What's okay
    Derivative d;
    d.b_pub();  // OK
}
