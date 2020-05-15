#include <iostream>
#include <string>
using namespace std;

int size(char *array);
void showValues(char *array, int size);
void concat(char *arrayA, char *arrayB);

int main(int argc, char const *argv[])
{
  char *dataA = new char[20], *dataB = new char[20];

  printf("Ingrese datos a las cadenas A:\n");
  cin.getline(dataA, 20);
  printf("Ingrese datos a las cadenas B:\n");
  cin.getline(dataB, 20);

  concat(dataA, dataB);
  return 0;
}

void concat(char *arrayA, char *arrayB)
{
  int lengthA{0}, lengthB{0};
  lengthA = size(arrayA);
  lengthB = size(arrayB);
  char *PstringrA = arrayA + lengthA;
  for (int i = 0; i < lengthB; i++)
  {
    *(PstringrA++) = *(arrayB++);
  }
  lengthA = size(arrayA);

  showValues(arrayA, lengthA);
}

int size(char *array)
{
  int account{0};
  while (*(array++))
  {
    account++;
  }
  return account;
}

void showValues(char *array, int size)
{
  for (int i = 0; i < size; i++)
    printf("%c", *(array++));
  printf("\n");
}