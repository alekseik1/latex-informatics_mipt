#include<iostream>

class Student
{
public:
    Student(int x, std::string s)
    {
        age = x;
        name = s;
    }

    void aging()
    {
        age++;
        std::cout << "I am " << age << " years old\n";
    }
protected:
    int age;
    std::string name;
};

class ElderStudent: public Student
{
private:
    int groupID;
public:
    ElderStudent(int x, std::string s, int group_id) : Student(x, s)
    {
        groupID = group_id;
    }
};

int main() {
    return 0;
}
