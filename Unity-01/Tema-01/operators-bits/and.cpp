#include <iostream>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
  int number{0};
  bool status = false;
  printf("Ingrese un numero.\n");
  scanf("%i", &number);

  int numbers[] = {5, 8, 9, 10, 2, 3, 9, 7, 8};

  int size = sizeof(numbers) / sizeof(numbers[0]);
  // printf("El tamaño es %i.\n", size);
  for (int i = 0; i < size; i++)
  {
    if ((number & numbers[i]) == number)
    {
      status = true;
      printf("Encontrado: %i.\nPosicicion: %i.\n", number, i + 1);
      break;
    }
  }

  if (status == false)
  {
    printf("No encontrado.Intentelo mas tarde.\n");
  }

  return 0;
}
