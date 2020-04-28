#include <iostream>

int main(int argc, char const *argv[])
{
  int result{0}, scoreA{0}, scoreB{0};
  printf("Registre sus notas.\n");
  scanf("%i", &scoreA);
  scanf("%i", &scoreB);

  result = scoreA | scoreB;

  if(scoreA != scoreB) result/2;


  result >11
    ? printf("Felicidades usted a aprobado con %i.\n", result)
    : printf("No aprobo, su calificacion es de %i.\n", result);

  return 0;
}