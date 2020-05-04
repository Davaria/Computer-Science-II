// The prime factors of 13195 are 5, 7, 13 and 29.

// What is the largest prime factor of the number 600851475143 ?
#include <iostream>

int main(int argc, char const *argv[])
{
  long int limit = 600851475143, higher{0};
  for (long int i = 2; i < (limit + 1); i++)
  {
    while (limit % i == 0)
    {
      limit = limit / i;
      if (i > higher)
        higher = i;
    }
  }
  printf("El  %li es el factor primo mas grande.\n", higher);
  return 0;
}
