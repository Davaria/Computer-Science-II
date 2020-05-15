#include <iostream>

int size(int *);
int addValues(int *, int);

int main(int argc, char const *argv[])
{
  int *ptri, len{0}, total{0};
  int integers[] = {1, 2, 3, 4, 5};

  ptri = integers;
  len = size(ptri);
  // printf("El tamaño de la cadena es %i.\n", len);
  total = addValues(ptri, len);
  printf("%i\n", total);

  return 0;
}

int addValues(int *array, int size)
{
  if (!(size))
    return 0;

  // return *(array + size - 1) + addValues(array, --size);

  return *array + addValues(++array, --size);
}

int size(int *array)
{
  int account{0};
  while (*array)
  {
    array++;
    account++;
  }

  return (account / 4);
}
