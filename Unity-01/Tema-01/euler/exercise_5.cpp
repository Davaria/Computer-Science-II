// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include <iostream>
#include <stdbool.h>

bool smallMultiple(long long int number);
int main(int argc, char const *argv[])
{
  // int number = 2520;
  for (long long int i = 12252240;; i++)
  {
    if (smallMultiple(i))
    {
      printf("El multiplo mas pequeño es %lli.\n", i);
      break;
    }
  }

  return 0;
}
bool smallMultiple(long long int number)
{
  const int LIMIT = 20;
  int account{0};
  for (long long int i = 1; i <= LIMIT; i++)
  {
    if (number % i == 0)
      account++;
  }
  if (account == LIMIT)
  {
    return true;
  }
  else
  {
    return false;
  }
}
