# <center> Algoritmos de ordenamientos </center>

## Insertion Sort

El ordenamiento por inserción es una manera muy natural de ordenar para un ser humano, y puede usarse fácilmente para ordenar un mazo de cartas numeradas en forma arbitraria. Requiere O(n²) operaciones para ordenar una lista de n elementos.

Ahora haremos un nuestro codigo en c++

**Funcion Insertion sort**

Funcion de tipo void que recibe un arreglo de enteros `values[]` y un entero `size`

```c++

void insertionSort(int values[], int size)
{
}
```

**Dentro de nuestra funcion**

- `value` tomara valores para comparar con los demas elementos del arreglo
- `j` sera un contador para asignar los elememtos removidos a su una posicion en el arreglo
- `for` empezara desde la posicion `1` ya que value toma el segundo valor de el arreglo, posicion `1`

```c++
void insertionSort(int values[], int size)
{
  int value{0}, j{0};
  for (int i = 1; i < size; i++)
  {
    value = values[i]; //obtenemos el valor actual a comparar
    j = i - 1;
    ...
    ...
    ...
    ...

  }
}
```

**La magia ocurre aqui**

- `while` mueve los elementos del arreglo values[0..i-1],que son mayores que el valor de la posición actual del recorrido, a una posición adelante de su posición actua, ordenando asi todas los valores del arreglo.

* Dentro de `while`, `value` al ser menor que la posicion anterior entonces value ocupa la posicion que corresponde
  Ejemplo:

  ```c++
  j = 0
  //  values[1] -> value = 2
  //  values[j] - values[0] = 3
  while (j >= 0 && values[j] > value) {
   //  values[j + 1] -> values[0 + 1] =  3
     values[j + 1] = values[j];
     j--
  }

  ```

* Detalle del `while` es que va a iterar mas de una vez en posiciones mayores a 1, lo cual ordenaria el arreglo

```c++
    while (j >= 0 && values[j] > value)
    {
      values[j + 1] = values[j];
      j = j - 1;
    }
    // Asigna la posicion de acuerdo al valor de j retornado de while
    // value = 2
    // j = -1
    // values[ -1 +1] -> value[0] = 2
    values[j + 1] = value;
    // values[0] = 2, values[1] = 3

```

- Detalle del `while` es que va a iterar mas de una vez en posiciones mayores a 1, lo cual ordenaria el arreglo

## Selection Sort

El ordenamiento por selección (Selection Sort en inglés) es un algoritmo de ordenamiento que requiere O ( n ^2 )operaciones para ordenar una lista de n elementos.

**findSmallest sort**

Funcion de tipo void que recibe un arreglo de enteros `values[]` y un entero `size`

- `small` toma el primer valor del arreglo para ser comparado con los demas elementos del arreglo y cambiar de valor si cumple la condicion `if`
- `position` la posicion del primer valor el cual va a varia su valor en las iteraciones

```c++

void findSmallest(int values[], int size)
{
  int small, position;
  small = array[i];
  position = i;
  for (int j = i + 1; j < 10; j++)
  {
    if (array[j] < small)
    {
      small = array[j];
      position = j;
    }
  }
  return position;
}
```

**Lo mas importante**

- `if` si los valores despues de la `posicion + 1` son menores entonces `value` almacenara su valor y `position` tomara la posicion de este

- Al finalizar el for se retorna la posicion los valores menores de el arreglo

```cpp
  if (array[j] < small)
    {
      small = array[j];
      position = j;
    }
  return position;
```

**Dentro de nuestra funcion selectionSort**

- `pos` tomara el valor que retorne la funcion `findSmallest(array, i)`
- `temp` guardara el valor que de la posicion que se va a actualizar `array[i]`
- `array[i]` la posicion almacena el valor de `array[pos]` que es la posicion del menor valor del arreglo n - i
- `array[pos] = temp` actuliza su valor con el anterior valor reemplazado

```c++
int selectionSort(int array[], int size)
{
  int pos, temp = 0;
  for (int i = 0; i < size; i++)
  {
    pos = findSmallest(array, i); //almacena la menor posicion de la funcion findSmallest(array, i);
    temp = array[i];
    array[i] = array[pos]; //la posicion almacena el valor de  array[pos] que es la posicion del menor valor del arreglo
    array[pos] = temp;
  }
}

```

## Merge Sort

- Divide : Divide los n elementos de array dentro de dos subarreglos n/2 elementos
- Conquer : Ordena recursivamente usando Merge Sort
- Combine : Combina los 2 subarreglos a un arreglo ordenado

**Solamente la funcion Merge**

Funcion de tipo `int` que tambien podria ser `void`.

- `int array[]` arreglo de enteros
- `start` la posicion incial de nuestro arreglo ene este caso 0
- `mid` que va a hacer la posicion media de nuestro arreglo
- `end` el numero total elementos - 1

```c++

int merge(int array[], int start, int mid, int end);
```

**Lo mas importante**

```cpp
int merge(int array[], int start, int mid, int end){

  int arrayA[10], arrayB[10]; //Creamos dos temporales arreglos para hacer la hacer la combinacion final

  int n1, n2, i, j, k;

  //a traves de estos calculos se establecen los limites para cada arreglo.
  n1 = mid - start + 1;
  n2 = end - mid;
  ...
  ...
}
```

**For y mas for's**

```cpp
  //Copia los datos a los arrays temporales.
  for (i = 0; i < n1; i++)
    arrayA[i] = array[start + i];

  for (j = 0; j < n2; j++)
    arrayB[j] = array[mid + j + 1];

```

**Fin de la funcion Merge**
`for` se encargará de combinar los dos arreglos. llegando asi a la fase final del algoritmo.

```cpp
//Se reinician los valores de i y j
  i = 0;
  j = 0;

  // El siguiente ciclo, se encargará de combinar los dos arreglos. llegando asi a la fase final del algoritmo
  for (k = start; k <= end; k++) //proceso para combinar arreglos ordenados
  {
    //Ordenamiento.
    if (arrayA[i] <= arrayB[j])
      array[k] = arrayA[i++];
    else
      array[k] = arrayB[j++];
  }

```

- `if y else` dentro del for comenzaran a comparar los arreglos y a ordenar los arreglos y poniendo en la posicion correspondiente en el arreglo original

**Funcion Merge Sort**

```cpp
int mergeSort(int array[], int start, int end);
```

- Funcion `mergeSort` funcion recursiva que se ejecutara siempre y cuando `start < end`. \*`mid` toma el valor de la mitad del arreglo

```cpp
int mergeSort(int array[], int start, int end)
{
  int mid{0};
  if (start < end)
  {
    //Encuentra el punto medio del vector.
    mid = (start + end) / 2;

    //Divide la primera y segunda mitad (llamada recursiva).
    mergeSort(array, start, mid);
    mergeSort(array, mid + 1, end);
    // Combina
    merge(array, start, mid, end);
  }
  printArray(array, ++end);
  return 0;
}
```

## QuickSort

Simliar al `Merge Sort` pero este algoritmo no divide el arreglo.
_`int array[]`: Arreglo de enteros
_`int start`: Posicion inicial del arreglo, que es 0.

- `int end` Los elementos de nuestro arreglo - 1.
- `int pi` el valor que retorna la funcion `particion`

```c++
// Función recursiva para hacer el ordenamiento
void quickSort(int array[], int start, int end)
{
  if (start < end)
  {
    int pi = particion(array, start, end);
    // Ordeno la lista de los menores
    quickSort(array, start, pi - 1);
    // Ordeno la lista de los mayores
    quickSort(array, pi + 1, end);
  }

  printArray(array, ++end);
}

```

**Funcion Particion**
Funcion que nos permitira hacer el recorrido y cambio de valores

```c++
int particion(int array[], int start, int end)
{
  int pivot = array[end];
  int i = (start - 1); // Indice inicial
   for (int j = start; j <= end - 1; j++)
  {
    // Si array[j] es menor que pivot
    if (array[j] < pivot)
    {
      i++; // incrementa el indice del elemento pequeño
      // Intercambiamos la posicion incial del elemento con array[j](paso por referencia)
      swap(array[i], array[j]);
    }
  }
  swap(array[i + 1], array[end]);
  return (i + 1);
}

```

Nos permite hacer el cambio de dos variables

```cpp

void swap(int &a, int &b)
{
int c = a;
a = b;
b = c;
}

```
