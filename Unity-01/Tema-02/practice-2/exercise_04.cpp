#include <iostream>
#include <string>
using namespace std;

int size(char *array);

int main(int argc, char const *argv[])
{

  char *data = new char[20];
  int total{0};
  cin.getline(data, 20);
  total = size(data);
  printf("%i\n", total);
  printf("El tamaño total de la cadena es %i.\n", total);

  return 0;
}

int size(char *array)
{
  int account{0};
  while (*(array++))
  {
    account++;
  }
  return account;
}
