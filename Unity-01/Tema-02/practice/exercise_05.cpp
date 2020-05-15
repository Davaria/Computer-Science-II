#include <iostream>
#include <string>
using namespace std;

int size(char *array);
void showValues(char *array, int size);
void concat(char *arrayA, char *arrayB);

int main(int argc, char const *argv[])
{
  // puntero a char, el cual va a contener 20 direcciones de memoria
  char *dataA = new char[20], *dataB = new char[20];

  printf("Ingrese datos a las cadenas A:\n");
  cin.getline(dataA, 20);
  printf("Ingrese datos a las cadenas B:\n");
  cin.getline(dataB, 20);

  concat(dataA, dataB);
  return 0;
}

// Funcion que recibe dos punteros a char
// Concatena dos cadenas
void concat(char *arrayA, char *arrayB)
{
  int lengthA{0}, lengthB{0};
  lengthA = size(arrayA);
  lengthB = size(arrayB);

  // bucle
  // El cual vamos a asignar sus valores a el arrayA
  for (int i = 0; i < lengthB; i++)
  {
    // Nuestro arrayA desde la posicion final va almacenar las direcciones de memoria de array B
    *(arrayA + lengthA + i) = *(arrayB + i);
  }
  // Volvemos a tomar el tamaño de nuestro arrayA ya concatenado
  lengthA = size(arrayA);

  showValues(arrayA, lengthA);
}

// Funcion que recibe un puntero a char
// retorna el tamaño de nuestro arreglo
// Iterando desde nuestro primera direccion de memoria
int size(char *array)
{
  int account{0};
  while (*array)
  {
    account++;
    array++;
  }
  return account;
}

void showValues(char *array, int size)
{
  for (int i = 0; i < size; i++)
    printf("%c", array[i]);
  printf("\n");
}