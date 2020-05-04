// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.
#include <iostream>
#include <math.h>
#include <stdbool.h>

int sizeNumber(int number);
int exchange(int number, int size);
bool isPalindrome(int numberA, int numberB);
int main(int argc, char const *argv[])
{
  int number{0}, higher{0}, lower{0};
  int result{0}, account{0};
  for (int i = 999; i > 99; i--)
  {
    for (int j = i; j > 99; j--)
    {
      number = i * j;
      account = sizeNumber(number);
      result = exchange(number, account);
      if (isPalindrome(number, result))
      {
        // printf("%i si es un numero palindrome.\n", number);
        lower = number;
      }
    }
    if (higher < lower)
      higher = lower;
  }
  printf("%i es el palindrome mayor.\n", higher);

  return 0;
}

// Funcion para hallar la longitud del numero
int sizeNumber(int number)
{
  int aux = number;
  int account{0};
  while (aux)
  {
    account += 1;
    aux /= 10;
  }
  return account;
}

// Funcion para invertir el numero
int exchange(int number, int size)
{
  int aux = number;
  int result{0};
  for (int i = size; i > 0; i--)
  {
    result += aux % 10 * pow(10, i - 1);
    aux /= 10;
  }
  return result;
}

bool isPalindrome(int numberA, int numberB)
{
  if (numberA == numberB)
    return true;
  return false;
}