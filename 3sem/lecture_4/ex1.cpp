#include<iostream>

struct Student {
    int8_t age;
    int16_t group;
    std::string name;
};

void student_print(Student x) {
    std::cout << x.name << " " << x.age
    << " " << x.group << "\n";
}

int main()
{
    Student vasya = {16, 649, "Vasilii Ivanov"};
    Student masha = {18, 649, "Maria Vasilyeva"};

    Student *p = nullptr;

    p = &vasya;

    std::cout << (*p).name << "\n";
    // This code is equal to
    std::cout << p -> name << "\n";
    student_print(masha);

    return 0;
}

void studentPrint1(Student *x) {
    std::cout << x->name << " " << x->age
    << " " << x->group << "\n";
}

void studentPrint2(const Student &x) {
    std::cout << x.name << " " << x.age
    << " " << x.group << "\n";
}
