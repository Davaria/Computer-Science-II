#include <iostream>

int main(int argc, char const *argv[])
{
  int number1, number2;
  printf("Operaciones basicas con bits.\n");
  printf("Ingrese un numero.\n");
  scanf("%i", &number1);
  scanf("%i", &number2);

  printf("Operador binario AND.\n");
  printf("%i & %i = %i\n", number1, number2, (number1 & number2));

  printf("Operador binario OR inclusivo.\n");
  printf("%i | %i = %i\n", number1, number2, (number1 | number2));

  printf("Operador binario OR exclusivo.\n");
  printf("%i ^ %i = %i\n", number1, number2, (number1 ^ number2));

  printf("Recorrer bits a la derecha.\n");
  printf("%i >> %i = %i\n", number1, number2, (number1 >> number2));

  printf("Recorrer bits a la izquierda.\n");
  printf("%i << %i = %i\n", number1, number2, (number1 << number2));
  return 0;
}
