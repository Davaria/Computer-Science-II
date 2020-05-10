#include <iostream>
#include "../headers/include/pow.h"

int main(int argc, char const *argv[])
{
  int number{0}, limit{0};
  printf("Ingresa el valor de un numero.\n");
  scanf("%i", &number);
  printf("Ingresa el exponente.\n");
  scanf("%i", &limit);
  printf("El %i elevado al %i es %i.\n", number, limit, pow(number, limit));
  return 0;
}
