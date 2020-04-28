#include <iostream>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
  int number{0};
  int account{1};

  printf("Ingrese un numero: ");
  scanf("%i", &number);

  while (true)
  {
    if (number < account){
      printf("%i no potencia de 2.\n", number);
      break;
    }
    else if (number == account){
      printf("%i es potencia de 2.\n", number);
      break;
    }
    account *=2;
  }

  return 0;
}
