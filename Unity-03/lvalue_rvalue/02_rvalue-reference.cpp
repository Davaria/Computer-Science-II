#include <iostream>
using namespace std;
int square(const int &number)
{
  return number * number;
}
int main(int argc, char const *argv[])
{
  const int &number = 10;
  // number = 20;
  cout << "Paso por refencia " << number << endl;
  cout << square(number) << endl;

  // Referencia rvalue
  int &&number1 = 10;
  cout << "Rvalue reference " << number1 << endl;
  number1 = 20;
  int number2 = number1;
  int &&result = number1 + number2;
  cout << "La suma de nuestro rvalues es " << result << endl;

  return 0;
}
