// 4. Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)
#include <iostream>
using namespace std;

int size(char *array);
int main(int argc, char const *argv[])
{
  char *data = new char[20];
  int total{0};
  cin.getline(data, 20);
  total = size(data);

  printf("El tamaño total de la cadena es %i.\n", total);

  return 0;
}

int size(char *array)
{
  if (!(*array))
    return 0;
  return 1 + size(++array);
}
