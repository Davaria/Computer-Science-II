#include <iostream>

void swap(int &, int &);
void reverseValues(int *, int);
void printArray(int *, int);
int main(int argc, char const *argv[])
{
  int *ptri, len{0}, total{0};
  int integers[] = {1, 2, 3, 4, 5};
  ptri = integers;
  len = sizeof(integers) / sizeof(integers[0]);

  reverseValues(ptri, len);
  printArray(ptri, len);

  return 0;
}

void reverseValues(int *array, int size)
{
  int *ptra = array + (size - 1);
  while (array <= ptra)
    swap(*(array++), *(ptra--));
}

void swap(int &a, int &b)
{
  int c = a;
  a = b;
  b = c;
}

void printArray(int *array, int size)
{
  for (size_t i = 0; i < size; i++)
    printf("%d ,", *(array++));
  printf("\n");
}
