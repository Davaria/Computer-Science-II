#include <iostream>
#include <ctime>
using namespace std;

void printArray(int[], int);
int findSmallest(int[], int);
int selectionSort(int[], int);

int main()
{
  unsigned t0, t1;
  t0 = clock();

  int integers[] = {11, 5, 2, 20, 42, 53, 23, 34, 101, 22};
  int length = sizeof(integers) / sizeof(integers[0]);
  selectionSort(integers, length);

  t1 = clock();
  double time = (double(t1 - t0) / CLOCKS_PER_SEC);
  cout << "Execution Time: " << time << endl;

  return 0;
}

int selectionSort(int array[], int size)
{
  int pos, temp = 0;
  for (int i = 0; i < size; i++)
  {
    pos = findSmallest(array, i); //almacena la menor posicion de la funcion findSmallest(array, i);
    temp = array[i];
    array[i] = array[pos]; //la posicion almacena el valor de  array[pos] que es la posicion del menor valor del arreglo
    array[pos] = temp;
  }

  printArray(array, size);
}

/*Funcion 
   encontrar la posicion del menor valor en todo el arreglo
   */
int findSmallest(int array[], int i)
{
  int small, position;
  small = array[i];
  position = i;
  for (int j = i + 1; j < 10; j++)
  {
    if (array[j] < small)
    {
      small = array[j];
      position = j;
    }
  }
  return position;
}

void printArray(int values[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", values[i]);
  printf("\n");
}
