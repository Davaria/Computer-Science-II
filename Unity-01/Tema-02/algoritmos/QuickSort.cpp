#include <iostream>
#include <ctime>
using namespace std;

void printArray(int[], int);
int particion(int[], int, int);
void swap(int &, int &);
void quickSort(int[], int, int);

int main(int argc, char const *argv[])
{
  unsigned t0, t1;
  t0 = clock();

  int integers[] = {11, 5, 2, 20, 42, 53, 23, 34, 101, 22};
  int len = sizeof(integers) / sizeof(integers[0]);

  quickSort(integers, 0, len - 1);
  // printArray(integers, len);

  t1 = clock();
  double time = (double(t1 - t0) / CLOCKS_PER_SEC);
  cout << "Execution Time: " << time << endl;
  return 0;
}

// Función recursiva para hacer el ordenamiento
void quickSort(int array[], int start, int end)
{
  if (start < end)
  {
    int pi = particion(array, start, end);
    // Ordeno la lista de los menores
    quickSort(array, start, pi - 1);
    // Ordeno la lista de los mayores
    quickSort(array, pi + 1, end);
  }

  printArray(array, ++end);
}

int particion(int array[], int start, int end)
{
  int pivot = array[end];
  int i = (start - 1); // Indice inicial

  for (int j = start; j <= end - 1; j++)
  {
    // Si array[j] es menor que pivot
    if (array[j] < pivot)
    {
      i++; // incrementa el indice del elemento pequeño
      // Intercambiamos la posicion incial del elemento con array[j](paso por referencia)
      swap(array[i], array[j]);
    }
  }
  swap(array[i + 1], array[end]);
  return (i + 1);
}

void swap(int &a, int &b)
{
  int c = a;
  a = b;
  b = c;
}

void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);
  printf("\n");
}