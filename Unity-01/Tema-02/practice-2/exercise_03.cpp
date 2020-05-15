#include <iostream>
#include <stdbool.h>

void bubbleSort(int *, int);
void swap(int &, int &);
void printArray(int *, int);
void bubbleSort(int *, int);

int main(int argc, char const *argv[])
{
  int integers[] = {5, 4, 3, 2, 1, 6};
  int len = sizeof(integers) / sizeof(integers[0]);

  bubbleSort(integers, len);
  printArray(integers, len);

  return 0;
}

void bubbleSort(int *array, int size)
{
  bool status;
  for (size_t i = 0; i < size; i++)
  {
    int *Pstart = array;
    int *Pend = array;
    status = true;
    for (size_t j = 0; j < size - 1 - i; j++)
    {
      if (*(Pstart) > *(++Pstart))
      {
        Pend = array + j;
        // printf("%d - %d\n", *(++Pend), *(Pend));
        // swap(*(--Pend), *(Pend));
        swap(*(++Pend), *(Pend));
        status = false;
      }
    }
    if (status)
    {
      // printf("Si funka el break\n");
      break;
    }
  }
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
