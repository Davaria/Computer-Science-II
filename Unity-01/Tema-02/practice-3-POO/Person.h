#include <iostream>
#include <string>
using namespace std;
int TOTAL = 20;
class Person
{
protected:
  int age;
  string name;
  string lastName;

public:
  Person();
  Person(string, string, int);
  string getName();
  string getLastName();
  int getAge();
  void setName(string);
  void setLastName(string);
  void setAge(int);
  void getData();
};

Person::Person()
{
  this->age = 0;
  this->name = "";
  this->lastName = "";
}

Person::Person(string name, string lastName, int age)
{
  this->name = name;
  this->lastName = lastName;
  this->age = age;
}

string Person::getName()
{
  return this->name;
}

string Person::getLastName()
{
  return this->lastName;
}

int Person::getAge()
{
  return this->age;
}

void Person::setName(string name)
{
  this->name = name;
}

void Person::setLastName(string lastName)
{
  this->lastName = lastName;
}

void Person::setAge(int age)
{
  this->age = age;
}

void Person::getData()
{
  cout << "Nombre: " << this->name << endl;
  cout << "Apellido: " << this->lastName << endl;
  cout << "Edad: " << this->age << endl;
}