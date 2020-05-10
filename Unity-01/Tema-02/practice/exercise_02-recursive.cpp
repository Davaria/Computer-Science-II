//Implementar una función que invierta los elementos de un arreglo de enteros(Iterativa y recursiva).
#include <iostream>

void getValues(int array[], int size);
void swap(int &a, int &b);
int reverse(int array[], int start, int end);

int main(int argc, char const *argv[])
{
  int size{0}, start{0};
  int integers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // Sizeof retona el numero total de bits de el tipo de dato de la variable
  size = sizeof(integers) / sizeof(integers[0]); // 40 / 4 -> 10

  reverse(integers, start, size);

  getValues(integers, size);
  return 0;
}

// Funcion recursiva
// start -> inicio el cual vamos a estar aumentando su valor en cada llamada a la funcion
// end -> inicio el cual vamos a estar decrementando su valor en cada llamada a la funcion
int reverse(int array[], int start, int end)
{
  // En la recursion end y start van a tener en mismo valor
  //  en ese caso la recursion dejara de ejecutarse
  if (start != end--)
  {
    // Funcion que intercambia los valores mediante ("Valor por referencia")
    swap(array[start], array[end]);

    reverse(array, ++start, end);
  }
}
// Funcion que intercambia los valores mediante ("Valor por referencia")
void swap(int &a, int &b)
{
  int c = a;
  a = b;
  b = c;
}
// Funcion que imprime un array
void getValues(int array[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%i ", array[i]);
  printf("\n");
}