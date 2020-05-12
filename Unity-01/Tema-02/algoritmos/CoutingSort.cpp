#include <iostream>

void countSort(int[], int);
void printArray(int[], int);
int findHigher(int[], int);
void initArray(int[], int);
void copyArray(int[], int[], int);

int main(int argc, char const *argv[])
{
  int integers[] = {1, 5, 2, 2, 4, 3, 3, 4, 1, 2};
  int len = sizeof(integers) / sizeof(integers[0]);

  countSort(integers, len);
  printArray(integers, len);
}

void countSort(int array[], int size)
{
  int newArray[size];
  int repeat[size];
  int max{0};

  initArray(repeat, size); // Funcion para inicializar un arreglo con elementos 0

  max = findHigher(array, size); // Funcion para encontrar el mayor elemento de un arreglo

  for (int i = 0; i < size; i++)
    repeat[array[i]]++; // Almacenamos las repeticiones de cada elemento.

  for (int i = 1; i <= max; i++)
    repeat[i] += repeat[i - 1]; //Suma de la posicion actual con la anterior
  // repeat[1] -> 2
  // repeat[2] -> 3
  // repeat[2] -> 2 + 3 = 5

  // printArray(array, size);
  // printArray(repeat, size);
  for (int i = size - 1; i >= 0; i--)
  {

    printf("array[%i] = %i | repeat[%i] = %i | newArray[%i - 1] = [%i] | newArray[%i] = %i \n", i, array[i], array[i], repeat[array[i]], repeat[array[i]], repeat[array[i]] - 1, repeat[array[i]] - 1, array[i]);
    /*
      Toma en cuenta que se empieza desde la ultima posicion
     1. Encontrar el valor de array[i]
     2. Encontrar el valor de repeat[] 
     3. Encontrar el valor de newArray[] pero antes resolver repeat[array[i]] - 1 la cual  es un entero que sera una posicion en newArray[]
     4. Una vez completado los pasos anteriores newArray[] tomara el elemento array[i]
    */
    newArray[repeat[array[i]] - 1] = array[i];
    repeat[array[i]]--;
  }

  // Funcion que pasa los elementos de newArray a array
  copyArray(array, newArray, size);
}

// Funcion para encontrar el mayor elemento de un arreglo
int findHigher(int array[], int size)
{
  int higher{0};
  higher = array[0];
  for (int j = 1; j < size; j++)
  {
    if (array[j] > higher)
    {
      higher = array[j];
    }
  }
  return higher;
}

// Funcion que copia los elementos de arrayB a arrayA
void copyArray(int arrayA[], int arrayB[], int size)
{
  for (size_t i = 0; i < size; i++)
    arrayA[i] = arrayB[i];
}

void initArray(int array[], int size)
{
  for (size_t i = 0; i < size; i++)
    array[i] = 0;
}

void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%i ", array[i]);
  printf("\n");
}
