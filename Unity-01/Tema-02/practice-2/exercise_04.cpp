#include <iostream>
#include <string>
using namespace std;

int size(char *array);

int main(int argc, char const *argv[])
{
  char *data = new char[20];
  string name;
  int total{0};
  cin.getline(data, 20);
  // getline(cin, name);
  total = size(name);
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
