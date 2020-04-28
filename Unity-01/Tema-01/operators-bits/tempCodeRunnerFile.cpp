#include <iostream>

int main(int argc, char const *argv[])
{
  // int cost = 3, exchange{0};
  // printf("Maquina de deseos.\n");
  // printf("Cada deseo cuesta 10.\n");
  // int account{0};

  // for (int i = 0; i < 10; i++)
  // {
  //   account = i ^ cost;
  //   printf("%i ->  %i\n", account, i);
  // }
   
  int numberA{0}, numberB{0};
  printf("Ingrese un numero.\n");
  scanf("%i", &numberA);
  scanf("%i", &numberB);
   printf("El numero menor es %i", numberA ^ numberB);
  
  return 0;

}
