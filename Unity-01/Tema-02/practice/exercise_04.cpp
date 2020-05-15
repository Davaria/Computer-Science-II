#include <iostream>
#include <string>
using namespace std;

int size(char array[]);

int main(int argc, char const *argv[])
{
  int total{0};
  char data[20];
  cin.getline(data, 20);
  total = size(data);
  printf("%i\n", total);
  printf("El tamaño total de la cadena es %i.\n", total);

  return 0;
}

int size(char array[])
{
  int i{0}, account{0};
  // Recorra siempre y cuando "array[i] sea en este caso un caracter"
  while (array[i])
  {
    i++;
    account++;
  }
  return account;
}
