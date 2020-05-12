# <center> Algoritmos de ordenamientos </center>

> Repositorio: https://github.com/Davaria/Computer-Science-II/tree/master/Unity-01/Tema-02/algoritmos

> Los codigos respectivos estaran en el repositorio de Github

## Tiempos de ejecucion. Escenario de peor caso

Algunas algoritmos pueden tener distintos tiempos de ejecución, teniendo el mismo tamaño de los datos y los mismos recursos computacionales. Esto es debido a que dependiendo de los datos a veces se llegue a una solución en la primera iteración, o bien tener que recorrer todos los datos.

El siguiente código tiene como fin encontrar el primer número par de una lista de números:

```py
def codigo_4(array):
  for k in range(len(array)):
    if( array[k] % 2 == 0 ):
      return k

  return null
```

Dependiendo de los valores que se guarden en el vector, así será el tiempo que dure el algoritmo en resolver el problema. Si el array es una secuencia de números enteros, entonces solo hará falta una iteración. Si es una lista de números impares, entonces recorrerá todas las iteraciones.

En el mejor de los escenarios el número par será el primero de la lista, lo que concluiría el algoritmo. En el peor caso ni siquiera tenga un número par, por que recorrería todos las instrucciones.

Para el mejor caso tendríamos una complejidad algorítmica:

<center> `F(x)=1`</center>

Para el peor de los casos la comjidad algorítmica sería:

<center> `F(x) = n` </center>

Para expresar el peor caso usaremos una notación conocida como “O Grande” y se escribe:

<center> `O(n)` </center>

Que significa complejidad en el peor caso. Se escribe como “O” pero en realidad es la letra griega Omicron.

## Insertion Sort

**Tiempo de ejecucion**

- Mejor de los casos **O(n)** tenemos que pensar en un problema con la menor complejidad en la que se pueda aplicar, en este caso serı́a el querer ordenar una cadena que ya se encuentra ordenada; el bucle externo se ejecutarı́a n veces mientras que el bucle interno no se ejecutarı́a, entonces solo hay n comparaciones, provocando una complejidad lineal.

* Peor de los casos **O(n²)** ocurre cuando la lista se encuentra invertida.

## Selection Sort

**Tiempo de ejecucion**

- Mejor de los casos **O(n²)** puede ser bueno para verificar si todo ya está ordenado. Ademas lo puedes usar cuando el espacio de memoria es limitado.

* Peor de los casos **O(n²)** cuando el tamaño de el arreglo o vector es demasiado grande.

## Couting Sort

El ordenamiento de conteo puede ser excepcionalmente rápido debido a la forma en que los elementos se ordenan usando sus valores como claves de matriz. Esto significa que se requiere más memoria para la matriz adicional a costa del tiempo de ejecución. Se ejecuta en tiempo **O(n + k)** donde **n** es el número de elementos que se ordenarán y **k** es el número de valores posibles en el rango.

**Tiempo de ejecucion**

- Mejor de los casos **O(n+k)**

* Peor de los casos **O(n+k)**

## Merge Sort

- Mejor de los casos **O(n\*log n)** el elemento más grande de una sub-lista ordenada es más pequeño que el primer elemento de su sublista opuesta, para cada paso de fusión que ocurre. Solo se compara un elemento de la lista opuesta,lo que reduce el número de comparaciones en cada paso de fusión a **N/2**.

* Peor de los casos **O(n\*log n)** es aquel en el que el ordenamiento por mergeSort tendrá que hacer el máximo número de comparaciones.

## Quick Sort

**Tiempo de ejecucion**

- Mejor de los casos **O(n\*log n)** el mejor caso del algoritmo de quicksort ocurre cuando en cada paso de la recursion en la particion produce dos partes de igual longitud.

- Peor de los casos **O(n²)** ocurre cuando en cada paso de la recursion se produce una particion desigual, principalmente esa parte consiste en un solo elemento y la otra parte consiste en el resto de los elementos.
