class A {
public:
    int age;
    int mark;
    A: age(5), mark(age) {}
    // Absolutely the same as:
    A: mark(age), age(5) {}
};
