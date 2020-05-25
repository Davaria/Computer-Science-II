#include <iostream>
void swap(int &, int &);
int reverseValues(int *, int *);
void printArray(int *, int);

using namespace std;

int main(int argc, char const *argv[])
{
  int *ptrstart, *ptrfinal, len{0};
  int integers[] = {1, 2, 3, 4, 5, 6, 7};
  len = sizeof(integers) / sizeof(integers[0]);

  ptrstart = integers;
  ptrfinal = integers + (len - 1);

  reverseValues(ptrstart, ptrfinal);
  printArray(ptrstart, len);

  return 0;
}

int reverseValues(int *arrayA, int *arrayB)
{
  if (arrayA >= arrayB)
  {
    return 0;
  }

  swap(*(arrayA), *(arrayB));
  reverseValues(++arrayA, --arrayB);
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
