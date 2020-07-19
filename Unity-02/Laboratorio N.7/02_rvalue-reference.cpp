#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Referencia por valor
  const int &number = 10;
  cout << "Paso por refencia " << number << endl;
  // Referencia rvalue
  int &&number1 = 10;
  cout << "Rvalue reference " << number << endl;
  int number_1 = 10; //asignacion de un rvalue(10) a un lvalue de tipo int(number_1)
  int number_2 = 20; //asignacion de un rvalue(20) a un lvalue de tipo int(number_2)
  // hacemos uso de rvalue reference
  int &&result = number_1 + number_2; // recordemos que obtendremos un rvalue de number_1 + number_2
  cout << "La suma de nuestro rvalues es " << result << endl;
  return 0;
}
