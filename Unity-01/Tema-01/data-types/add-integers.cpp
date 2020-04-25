#include <iostream>

int main(int argc, char const *argv[])
{
  int number1{0};
  int number2{0};
  int sum{0};

  printf("Enter a number: ");
  scanf("%i", &number1);
  printf("Enter a number: ");
  scanf("%i", &number2);

  sum = number1 + number2;
  printf("Sum is %i. \n", sum);

  return 0;
}

