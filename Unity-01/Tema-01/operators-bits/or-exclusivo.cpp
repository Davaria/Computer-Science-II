#include <iostream>

int main(int argc, char const *argv[])
{
  int cost = 1, exchange{0};
  printf("Maquina de deseos.\n");
  printf("Cada deseo cuesta 1 dolar.\n");
  printf("Lista de cambios.\n");

  int account{0};

  for (int i = 1; i <= 10; i++)
  {
    account = i ^ cost;

    if (i % 2 == 0)
      account -= 2;
    // account
    printf("Recibido: %i, Vuelto: %i\n", i, account);
  }

  return 0;
}
