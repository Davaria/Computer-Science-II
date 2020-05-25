#include <iostream>
using namespace std;

class Integer
{
private:
  int x;

public:
  Integer()
  {
    this->x = 0;
  }
  Integer(int x)
  {
    this->x = x;
  }

  Integer(Integer &ptrInteger)
  {
    this->x = ptrInteger.x;
  }
  void print()
  {
    cout << this->x << endl;
  }
};

int main(int argc, char const *argv[])
{
  // Si hay un new tambien debe haber un delete
  Integer *number = new Integer(3);
  Integer *number2;
  // Constructor copia
  number2 = number;
  number2->print();
  // Eliminamos el new
  delete number;
  return 0;
}