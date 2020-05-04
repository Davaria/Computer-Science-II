// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

// Find the sum of all the primes below two million.

#include <iostream>

int sumPrime(long long int number);
int main()
{
  long long int number{0};
  long long int limit = 2000000;

  number = sumPrime(limit);

  printf("La suma total de los numero primos es %li.\n", number);

  return 0;
}

int sumPrime(long long int number)
{
  long long int accountA{0}, accountTotal{0};
  for (long long int i = 2; i <= number; i++)
  {
    accountA = 0;
    for (long long int j = 1; j <= i; j++)
    {
      if (i % j == 0)
        accountA++;
    }
    if (accountA == 2)
      accountTotal += i;
  }
  return accountTotal;
}
