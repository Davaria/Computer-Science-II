// The sum of the squares of the first ten natural numbers is,
// 12+22+...+102=385

// The square of the sum of the first ten natural numbers is,
// (1+2+...+10)2=552=3025

// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <iostream>

void SumSquares(int number, int accountA, int accountB)
{
  for (int i = 1; i <= number; i++)
  {
    accountA += (i * i);
    accountB += i;
  }
  accountB *= accountB;
  printf("%i\n", accountB - accountA);
}

int main(int argc, char const *argv[])
{
  int number = 100, accountA{0}, accountB{0};
  SumSquares(number, accountA, accountB);

  return 0;
}
