#include <iostream>
void swap(int &, int &);
int reverseValues(int *, int);
void printArray(int *, int);

int main(int argc, char const *argv[])
{
  int *ptri, len{0}, total{0};
  int integers[] = {1, 2, 3, 4, 5, 6, 7};
  ptri = integers;
  len = sizeof(integers) / sizeof(integers[0]);

  reverseValues(ptri, len);
  printArray(ptri, len);

  return 0;
}

int reverseValues(int *array, int size)
{
  if (!(size / 2))
  {
    return 0;
  }
  int *ptra = array + (--size);

  // printf("%d %d\n", *(array++), *(ptra));
  swap(*(array++), *(ptra));
  reverseValues(array, (--size));
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
    printf("%d ", *(array++));
  printf("\n");
}
