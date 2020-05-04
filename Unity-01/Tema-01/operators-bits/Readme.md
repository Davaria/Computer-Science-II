# <center> [Operadores de bits](https://github.com/Davaria/Computer-Science-II/blob/master/Unity-01/Tema-01/operators-bits/Readme.md) </center>
 
## 1. Relacion de bit y bytes

### Bit

Un bit es la **unidad más pequeña** de almacenaje que puede tomar un
ordenador. Sus opciones se reducen a dos, **tomando el valor de 0 o de 1**. Si se
desea representar números mayores, se deberá combinar bits:

```c
bit = 0 | 1
```

### Bytes

Es un **conjunto de 8 bits**, formando según una secuencia que representa un
carácter. Se puede hacer una correspondencia entre cada número decimal (0 a
9), las letras mayúsculas y minúsculas (A hasta Z), los sı́mbolos matemáticos,
la puntuación, y demás sı́mbolos, con un respectivo byte.

```c
byte = 8 bits
```
## 2.Operadadores binarios en C++

### Operadores a nivel binario

Los operadores a nivel de bit nos permite manejar internamente los valores de la variables(su valor binario) y solo trabajan con valores numericos enteros.

* & -> Operador AND  
* ^ -> Operador OR inclusivo 
* | -> Operador OR exclusivo
* **<<** -> Recorrer bits a la izquierda
* **>>**-> Recorrer bits a la derecha

```cpp
#include <iostream>

int main(int argc, char const *argv[])
{
  int number1, number2;
  printf("Operaciones basicas con bits.\n");
  printf("Ingrese un numero.\n");
  scanf("%i", &number1);
  scanf("%i", &number2);

  printf("Operador binario AND.\n");
  printf("%i & %i = %i\n", number1, number2, (number1 & number2));

  printf("Operador binario OR inclusivo.\n");
  printf("%i | %i = %i\n", number1, number2, (number1 | number2));

  printf("Operador binario OR exclusivo.\n");
  printf("%i ^ %i = %i\n", number1, number2, (number1 ^ number2));

  printf("Recorrer bits a la derecha.\n");
  printf("%i >> %i = %i\n", number1, number2, (number1 >> number2));

  printf("Recorrer bits a la izquierda.\n");
  printf("%i << %i = %i\n", number1, number2, (number1 << number2));
  return 0;
}
```
### Operadores AND

Compara el primer bit del primer operando con el primer bit del segundo
operando, si los dos bits equivalen a 1, el bit se establece en uno, en caso
contrario se establece en 0, despues con los segundos bits y asi sucesivamente
hasta terminar.

```cpp
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

```

### Operadores OR exclusivo
Compara el primer bit del primer operando con el primer bit del segundo
esperando, si un bit equivale a 1 y el otro, el bit se establece en uno, en caso
contrario se establece en 0, despues con los segundo bits y asi sucesivamente
hasta terminar.

```cpp
#include <iostream>

int main(int argc, char const *argv[])
{
  int cost = 1, exchange{0};
  printf("Maquina de deseos.\n");
  printf("Cada deseo cuesta 1 dolar.\n");
  printf("Lista de cambios.\n");

  int account{0};

  for (int i = 1; i <= 10; i++)
  {
    account = i ^ cost;

    if (i % 2 == 0)
      account -= 2;
    // account
    printf("Recibido: %i, Vuelto: %i\n", i, account);
  }

  return 0;
}
```
### Operadores OR inclusivo
Compara el primer bit del primer operando con el primer bit del segundo
operando, si uno de los bits equivale a 1, el bit se establece en uno, en caso
contrario se establece en 0, despues con los segundos bits y asi sucesivamente
hasta terminar.

```cpp
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
```