#include <iostream>
#include <stdio.h>
#include <ctime>
using namespace std;

void insertionSort(int values[], int size);
void printArray(int values[], int size);

int main()
{
  unsigned t0, t1;
  t0 = clock();

  int integers[] = {11, 5, 2, 20, 42, 53, 23, 34, 101, 22};
  int size = sizeof(integers) / sizeof(integers[0]);

  insertionSort(integers, size);

  t1 = clock();
  double time = (double(t1 - t0) / CLOCKS_PER_SEC);
  cout << "Execution Time: " << time << endl;
  return 0;
}

/* Función de insertion Sort*/
void insertionSort(int values[], int size)
{
  int value{0}, j{0};
  for (int i = 1; i < size; i++)
  {
    value = values[i]; //obtenemos el valor actual a comparar
    j = i - 1;

    /* mueve los elementos del arreglo values[0..i-1],que son mayores que el valor de la posición actual del recorrido, a una posición adelante de su posición actua, ordenando asi todas los valores del arreglo  */
    while (j >= 0 && values[j] > value)
    {
      values[j + 1] = values[j];
      j = j - 1;
    }
    // Asigna la posicion de acuerdo al valor de j retornado de while
    values[j + 1] = value;
  }
  printArray(values, size);
}

// función auxiliar para imprimir un arrary de tamaño n
void printArray(int values[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", values[i]);
  printf("\n");
}
