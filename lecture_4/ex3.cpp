#include<iostream>

struct Student {
    int8_t age;
    int16_t group;
    std::string name;
};

void studentPrint(const Student &x);

int group_max_size = 10;
int main()
{
    Student *my_group = new Student[group_max_size];
    for(int k = 0; k < group_max_size; k++)
    {
        my_group[k].age = 17 + k;
        my_group[k].group = 600 + k;
        my_group[k].name = "Vasya Ivanov";
    }

    for(int k = 0; k < group_max_size; k++)
    {
        studentPrint(my_group[k]);
    }
    return 0;
}

void studentPrint(const Student &x) {
    std::cout << x.name << " " << x.age
    << " " << x.group << "\n";
}
