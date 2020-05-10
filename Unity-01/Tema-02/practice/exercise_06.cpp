#include <iostream>
using namespace std;

int size(char *array);
void showValues(char *array, int size);
void copy(char *stringA, char *stringB);

int main(int argc, char const *argv[])
{
  char *stringA = new char[20], *stringB = new char[20];
  printf("Cadena A: ");
  cin.getline(stringA, 20);

  copy(stringA, stringB);
  return 0;
}

// Funcion que recibe dos parametros a char
// Vamos a copiar los valores de string A a string B
void copy(char *stringA, char *stringB)
{
  for (int i = 0; i < size(stringA); i++)
  {
    // stringB comienza a almecenar la direccion de memoria de stringA
    *(stringB + i) = *(stringA + i);
  }
  // Imprimimos los valores de la cadena B
  showValues(stringB, size(stringB));
}

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