//Divide : Divide los n elementos de array dentro de dos subarreglos n/2 elementos
//Conquer : Ordena recursivamente usando Merge Sort
//Combine : Combina los 2 subarreglos a un arreglo ordenado

#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;

void printArray(int[], int);
int mergeSort(int[], int, int);
int merge(int[], int, int, int);

int main()
{
  unsigned t0, t1;
  t0 = clock();

  int integers[] = {11, 5, 2, 20, 42, 53, 23, 34, 101, 22};
  int len = sizeof(integers) / sizeof(integers[0]);

  mergeSort(integers, 0, len - 1);
  // printArray(integers, len);

  t1 = clock();
  double time = (double(t1 - t0) / CLOCKS_PER_SEC);
  cout << "Execution Time: " << time << endl;

  return 0;
}

int mergeSort(int array[], int start, int end)
{
  int mid{0};
  if (start < end)
  {
    //Encuentra el punto medio del vector.
    mid = (start + end) / 2;

    //Divide la primera y segunda mitad (llamada recursiva).
    mergeSort(array, start, mid);
    mergeSort(array, mid + 1, end);
    // Combina
    merge(array, start, mid, end);
  }
  printArray(array, ++end);
  return 0;
}

int merge(int array[], int start, int mid, int end)
{
  int arrayA[10], arrayB[10]; //Creamos dos temporales arreglos para hacer la hacer la combinacion final

  int n1, n2, i, j, k;

  //a traves de estos calculos se establecen los limites para cada arreglo.
  n1 = mid - start + 1;
  n2 = end - mid;

  //Copia los datos a los arrays temporales.
  for (i = 0; i < n1; i++)
    arrayA[i] = array[start + i];

  for (j = 0; j < n2; j++)
    arrayB[j] = array[mid + j + 1];

  arrayA[i] = 9999; //Para marcar el final de cada matriz temporal
  arrayB[j] = 9999;

  //Se reinician los valores de I y J
  i = 0;
  j = 0;

  // El siguiente ciclo, se encargará de combinar los dos arreglos. llegando asi a la fase final del algoritmo
  for (k = start; k <= end; k++) //proceso para combinar arreglos ordenados
  {
    //Ordenamiento.
    if (arrayA[i] <= arrayB[j])
      array[k] = arrayA[i++];
    else
      array[k] = arrayB[j++];
  }

  return 0;
}

void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", array[i]);
  printf("\n");
}
