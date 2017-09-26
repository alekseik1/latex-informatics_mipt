#include<iostream>

struct Student {
    int8_t age;
    int16_t group;
    std::string name;
};

void studentPrint(const Student &x);

int main()
{
    Student *p_student = new Student;
    p_student->age = 17;
    p_student->group = 649;
    p_student->name = "Vasya Ivanov";

    studentPrint(*p_student);
    return 0;
}

void studentPrint(const Student &x) {
    std::cout << x.name << " " << x.age
    << " " << x.group << "\n";
}
