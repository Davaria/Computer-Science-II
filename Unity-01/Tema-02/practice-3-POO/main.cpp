#include <iostream>
#include <array>
#include <string>
#include "./ArrayPerson.h"
using namespace std;

int main(int argc, char const *argv[])
{
  Person person[] = {{"Qui-Gon", "Jinn", 52}, {"Anakin", "Skywalker", 30}, {"Obi Wan", "Kenobi", 62}};

  int size = sizeof(person) / sizeof(person[0]);
  ArrayPerson *p = new ArrayPerson(person, size);

  string name, lastName;
  int age;
  Person *person2 = new Person("Darth", "Vader", 20);

  p->insert(2, *person2);
  p->remove(1);
  cout << "Lista" << endl;
  p->printArray();

  delete person2;
  delete p;
  return 0;
}