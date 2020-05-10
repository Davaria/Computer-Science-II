// 4. Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)
#include <iostream>

int size(char *array);
int main(int argc, char const *argv[])
{
  int total{0};
  char helloWorld[] = {'H', 'o', 'l', 'a', 'm', 'u', 'n', 'd', 'o', '!', '\0'};
  // puntero a char el cual recibe la direccion del primer elemento de helloWorld
  char *CPointer = helloWorld;
  total = size(CPointer);

  printf("El tamaño total de la cadena es %i.\n", total);

  return 0;
}

// funcion que recibe un puntero a char
int size(char *array)
{
  // En caso de ya no existir una direccion de memoria de algun elemento
  // pues retorna 0
  if (!(*array))
    return 0;
  // Va a seguir iterando por las direcciones de memoria de nuestro arreglo
  return 1 + size(++array);
}
