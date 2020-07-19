#include <iostream>
#include <vector>
using namespace std;

class A
{
  int *ptr;

public:
  A()
  {
    //Constructor predeterminado
    cout << "Calling Default constructor\n";
    ptr = new int;
  }

  A(const A &obj)
  {
    // Constructor copia
    // se crea una copia del objeto
    this->ptr = new int;
    cout << "Calling Copy constructor\n";
  }

  A(A &&obj)
  {
    // Move constructor
    // Simplemente cambiara los recursos
    // sin crear una copia
    cout << "Calling Move constructor\n";
    this->ptr = obj.ptr;
    obj.ptr = NULL;
  }

  ~A()
  {
    // Destructor
    cout << "Calling Destructor\n";
    delete ptr;
  }
};

int main()
{

  vector<A> vec;
  vec.push_back(A());

  return 0;
}