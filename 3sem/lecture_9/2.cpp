#include<iostream>

struct Student
{
  int age;
  std::string name;

  Student(int _age, const std::string& _name)
  {
      name = _name;
      age = _age;
  }

  void aging()
  {
      age++;
      std::cout << name << ": I'm now " << age << " years old" << "\n";
  }

  void print() const    // We cannot change the object itself
  {
      std::cout << name << "-" << age << "\n";
  }
};

int main()
{
    Student c(17, "Petya");
    c.aging();
    c.print();
}
