// By listing the first six prime numbers : 2, 3, 5, 7, 11, and13, we can see that the 6th prime is 13.
//     What is the 10 001st prime number
//     ?
#include <iostream>

int numberPrime(long int number);
int main()
{
  long int number{0};
  long int limit = 10001;

  number = numberPrime(limit);

  printf("El numero en el puesto %li es %li.\n", limit, number);

  return 0;
}

int numberPrime(long int number)
{
  int accountA{0}, accountB{0};
  long int numberPrim{0};
  for (long int i = 2;; i++)
  {
    accountB = 0;
    for (long int j = 1; j <= i; j++)
    {
      if (i % j == 0)
        accountB++;
    }
    if (accountB == 2)
      accountA++;
    if (accountA == number)
    {
      numberPrim = i;
      break;
    }
  }
  return numberPrim;
}
