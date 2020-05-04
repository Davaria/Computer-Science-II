// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a2 + b2 = c2

// For example, 32 + 42 = 9 + 16 = 25 = 52.

// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

#include <iostream>
#include <math.h>

void sqrt_original(float number);
int main(int argc, char const *argv[])
{
  float a{0}, b{0}, result = 1000;
  float c{0};
  bool isStatus = false;
  for (int i = 100; i < 1000; i++)
  {
    float sum = 0;
    for (int j = 1; j < i; j++)
    {
      if (i > j)
      {
        a = j;
        b = i;
        printf("%f %f = ", a, b);
        c = pow(i, 2) + pow(j, 2);
        c = sqrt(c);
        printf("%f -> ", c);
        sum = a + b + c;
        printf("%f\n", sum);
        if (c > b && b > a)
        {
          if (sum == result)
          {
            isStatus = true;
          }
        }
      }
    }
    if (isStatus)
      break;
  }
  printf("%f\n", a);
  printf("%f\n", b);
  printf("%f\n", c);
  printf("Resultado: %f\n", a * b * c);

  return 0;
}

// int sizeNumber(int number)
// {
//   int aux = number;
//   int account{0};
//   while (aux)
//   {
//     account += 1;
//     aux /= 10;
//   }
//   return account;
// }