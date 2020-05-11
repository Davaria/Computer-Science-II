// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include <iostream>
#include <stdbool.h>

bool smallMultiple(long long int number, int limit);
int main(int argc, char const *argv[])
{
  const long long int NUMBERLIMIT = 12252240;
  // const long long int NUMBERLIMIT = 2520;
  const int LIMIT = 20;
  // const int LIMIT = 10;

  for (long long int i = NUMBERLIMIT;; i++)
  {
    if (smallMultiple(i, LIMIT))
    {
      printf("El multiplo mas pequeño es %lli.\n", i);
      break;
    }
  }

  return 0;
}
bool smallMultiple(long long int number, int limit)
{
  int account{0};
  for (long long int i = 1; i <= limit; i++)
  {
    if (number % i == 0)
      account++;
  }
  if (account == limit)
    return true;
  return false;
}
