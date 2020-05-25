#include <iostream>
#include <string>
#include <vector>
#include <stdbool.h>
#include "./Person.h"
using namespace std;

class ArrayPerson
{
protected:
  Person *ptrPerson;
  int size;

public:
  ArrayPerson(ArrayPerson &);
  ArrayPerson(Person[], const int);
  int getSize();
  void pushPerson(Person &, int);
  void insert(const int pos, const Person &);
  void remove(const int pos);
  void clear(const int pos);
  void printArray();
  ~ArrayPerson();
};

ArrayPerson::ArrayPerson(ArrayPerson &p)
{
  this->ptrPerson = p.ptrPerson;
  this->size = p.size;
}

ArrayPerson::ArrayPerson(Person person[], const int size)
{
  this->ptrPerson = person;
  this->size = size;
}

int ArrayPerson::getSize()
{
  return this->size;
}

void ArrayPerson::pushPerson(Person &p, int len)
{
  ptrPerson[len] = p;
  this->size += 1;
}

void ArrayPerson::insert(const int pos, const Person &p)
{
  for (size_t i = 0; i < this->size; i++)
  {
    if (pos == i)
    {
      cout << "Encontrado: " << endl;
      ptrPerson[pos - 1] = p;
    }
  }
}
void ArrayPerson::remove(const int pos)
{
  bool status = false;
  for (size_t i = 0; i < (this->size - 1); i++)
  {
    if (i == (pos - 1))
      status = true;
    if (status)
      ptrPerson[i] = ptrPerson[i + 1];
  }
  this->size -= 1;
}

void ArrayPerson::printArray()
{
  for (size_t i = 0; i < this->size; i++)
    ptrPerson[i].getData();
}

ArrayPerson::~ArrayPerson()
{
  delete ptrPerson;
}