#include <iostream>

void swap(int &a, int &b);
void getValues(int array[], int size);
void bubbleSort(int array[], int size);

int main(int argc, char const *argv[])
{
  int integers[] = {10, -1, 40, 100, 50, 60};

  int size = sizeof(integers) / sizeof(integers[0]);

  bubbleSort(integers, size);

  return 0;
}

// Algoritmo de ordanamiento "bubbleSort"
// el cual va a intercambiar sus valores, si el valor que sigue es
void bubbleSort(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    // Al estar avanzando siempre un valor mas debemos restar una posicion menos
    printf("%i \n", i);
    for (int j = 0; j < size - i - 1; j++)
    {

      if (array[j] > array[j + 1])
      {
        swap(array[j], array[j + 1]);
      }
    }
  }
  getValues(array, size);
}

void getValues(int array[], int size)
{
  for (int i = 0; i < size; i++)
    printf(" %d ", array[i]);
  printf("\n");
}

void swap(int &a, int &b)
{
  int c = a;
  a = b,
  b = c;
}