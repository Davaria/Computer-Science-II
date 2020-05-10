//Implementar una función que invierta los elementos de un arreglo de enteros(Iterativa y recursiva).
#include <iostream>

void swap(int &a, int &b);
void exchange(int array[], int size);
void getValues(int array[], int size);

int main(int argc, char const *argv[])
{
  int integers[] = {1, 2, 3, 4, 5};
  // sizeof -> numero total de bits
  // int -> 4 bits
  int size = sizeof(integers) / sizeof(integers[0]); // 20 / 4 -> 5
  exchange(integers, size);

  return 0;
}

// Funcion para recorrer el arreglo y hacer el intercambio de forma iterativa
void exchange(int array[], int size)
{
  int account{0};
  // for
  // (size - 1) empezamos a recorrer desde el ultimo valor
  // (size / 2) hasta la mitad del tamaño del arreglo
  for (int i = size - 1; i > (size / 2); i--)
  {
    swap(array[account], array[i]);
    account++;
  }

  getValues(array, size);
}

// Funcion que intercambia los valores mediante ("Valor por referencia")
void swap(int &a, int &b)
{
  int c = a;
  a = b;
  b = c;
}

void getValues(int array[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%i", array[i]);
  printf("\n");
}
