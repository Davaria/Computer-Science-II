#include <iostream>

int main(int argc, char const *argv[])
{
  // Declaracion de un puntero
  int *pointerArray;
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int length = sizeof(array) / sizeof(array[0]);
  // Asignamos al puntero la primera posicion de nuestro arreglo
  pointerArray = array;

  for (int i = 0; i < length; i++)
    // printf("%p\n", pointerArray++);
    // Imprimimos las direciones de memoria(%p) y los valores(%d)
    printf("%p %d\n", pointerArray++, *pointerArray);
  return 0;
}
