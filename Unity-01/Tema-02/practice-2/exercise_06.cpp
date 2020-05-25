#include <iostream>
using namespace std;

int size(char *array);
void swapChar(char &, char &);
void showValues(char *array, int size);
char copy(char *stringA, char *stringB);

int main(int argc, char const *argv[])
{
  char *stringA = new char[20], *stringB = new char[20];
  printf("Cadena A: ");
  cin.getline(stringA, 20);

  copy(stringA, stringB);
  printf("%i\n", size(stringB));
  showValues(stringB, size(stringB));

  delete stringA;
  delete stringB;

  return 0;
}

char copy(char *stringA, char *stringB)
{
  while (*(stringA))
    swapChar(*(stringB++), *(stringA++));
}

void swapChar(char &a, char &b)
{
  a = b;
}

int size(char *array)
{
  int account{0};
  while (*(array++))
    account++;
  return account;
}

void showValues(char *array, int size)
{
  printf("Cadena B: ");
  for (int i = 0; i < size; i++)
    printf("%c", *(array++));
  printf("\n");
}