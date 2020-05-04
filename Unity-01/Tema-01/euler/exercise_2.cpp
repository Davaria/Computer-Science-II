// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>

int main(int argc, char const *argv[])
{
  const int LIMIT = 4000000;
  int account{0};
  int a{1};
  int b{2};

  while (a < LIMIT || b < LIMIT)
  {
    // printf("%i,%i,", a, b);
    if (a % 2 == 0)
      account += a;
    if (b % 2 == 0)
      account += b;
    a += b;
    b += a;
  }

  printf("La suma total es %i.\n", account);
  return 0;
}
