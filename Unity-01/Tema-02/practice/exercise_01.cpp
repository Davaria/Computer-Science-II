#include <iostream>
#include <stdio.h>

int addValues(const int array[], int size)
{
  int account{0};
  for (int i = 0; i < size; account += array[i++])
    ;
  return account;
}

int addRecursive(const int array[], int size)
{
  if (size == 0)
    return array[0];

  return array[size - 1] + addValues(array, --size);
}

int main(int argc, char const *argv[])
{
  int total{0}, size{0};
  int arrayInt[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // sizeof nos retorna el numero total de bits
  // sizeof(arrayInt) -> retorna el numero total de bits en un arreglo => 10 x 4=  40 bits
  // sizeof(arrayInt[0]) -> retorna los bits de 1 => 4
  // Entonces size seria 40 / 4 = 10, los numeros de los elementos
  size = sizeof(arrayInt) / sizeof(arrayInt[0]);

  // total = addRecursive(arrayInt, size);
  total = addValues(arrayInt, size);

  // printf() -> es lo mismo que un cout
  // standf() -> es lo mismo que un cin
  printf("La suma total es %i\n", total);

  return 0;
}
