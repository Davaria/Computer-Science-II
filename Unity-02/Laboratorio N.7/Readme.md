# Laboratorio N-7 👨‍🏫

## Investigar y describir sobre MoveSemantics, lvalue y rvalue adicionalmente con sus ejemplos respectivos(1 y 2)

- **Lvalue:**

  Lo cual haciendo uso de un traductor seria **valor izquierdo.**

  **_¿Porque ese nombre?_**

  Okey, la explicacion es la siguiente son **lvalues** aquellos valores que reside en la memoria("su tamaño depende tipo de dato") y son direccionables("cuando hacemos uso de punteros").

  **_Ejemplo:_**

  ```cpp
  int number;// este es un lvalue de tipo int
  char name; // este es un lvalue de tipo char
  ```

- **Rvalue:**

  Si otra vez usamos un traductor el cual dice **valor derecho.**

  **_¿Te cuento un secreto?_**

  Los **rvalues** podriamos decir que son aquellos valores literales o temporales que esta del lado derecho de la **expresion de igualdad(=).**

  A tomar en cuenta

  - Los rvalues no son lvalues.
  - No tienen direcccion de memoria
  - En la parte de **(1) el lvalue 10** no tiene direccion de memoria especifica entonces hace uso del **lvalue number que si tiene.**

  **_Ejemplo:_**

  ```cpp
  int number; // este es un lvalue de tipo int,no lo olvides ;)
  number = 10;(1) // 10
  ```

- **Movement Semantic**

  Segun San Google:

  > "La semántica de movimiento , y la base de la semántica de movimiento es distinguir las expresiones que son **rvalue** de las que son **lvalue**."

### Reflexion del dia 👴

"Una heurística útil para determinar si una expresión es un valor izquierdo es preguntar si puede tomar su dirección. Si es posible, por lo general es. Si no se puede, por lo general es un valor de lado derecho ." **C++ for dummy's**

---

## Implementar y explicar un ejemplo explicando lvalue y referencia rvalue con su ejemplo respectivos.(3 y 4)

**Segun las sagradas escrituras, antes de rvalue reference...** 🙏

Se dice que se le permite tomar la dirección de un **rvalue** solo si la almacena en una variable constante (inmutable). Más técnicamente, _se le permite vincular un valor constante a un rvalue_.

Ejemplo:

❌ Para salir de dudas lo haremos sin una variable constante(lvalue) asignado aun 10 (rvalue) 🤔...

```cpp
int& number = 10; //Error
```

¿Pero porque?

Es una inicialización no válida de una referencia de tipo no constante a `int&` partir de un valor de tipo `int`.

Al ser `x` una constante, no se puede alterar.

✅ Entonces la forma correcta es la siguiente, al ser `x` una constante, no se puede alterar.

```cpp
const int& x = 10;
```

Prosor, digamos quiero usar esta referencia pero que no sea inmutable(constante). ¿Existe algo asi? 🤔

La respuesta es si mi estimado millenial, si existe y se llama **_rvalue reference._**

## _Pasion y vida de Rvalue reference_

Lo que mas resalta el la declaracion del doble ampersand `&&` despues de la declaracion de el tipo de dato de nuestro lvalue.

**_Aplicacion en codigo_**

```cpp
int&& number = 10;
```

**_Sintaxis de rvalue_**

```cpp
<type-data>&& <lvalue-name> = <rvalue>
```

Ahora pdemos nosotros modificar el valor.

Ejemplo:

```cpp
int number_1 = 10;//asignacion de un rvalue(10) a un lvalue de tipo int(number_1)
int number_2 = 20;//asignacion de un rvalue(20) a un lvalue de tipo int(number_2)
// hacemos uso de rvalue reference
int&& result = number_1 + number_2;// recordemos que obtendremos un rvalue de number_1 + number_2
```

Aquí creo dos enteros `number_1` y `number_2`. El cual sumamos los valores de estos en `int&& result`.Ahora `int&& result` una referencia a un objeto temporal, o una referencia de valor. No hay nada `const` alrededor, así que soy libre de modificar segun lo vea conveniente. Esto no sería posible sin las referencias de valor y su doble notación.

---

## Investigar, describir e implementar un ejemplo usando std::move (5)

## **¿Que es std::move?** 🔫

> Basicamente mueve un objeto a otro, nuestros **rvalues** .

- `std::move()` indica la transferencia eficiente de recursos a otro objeto.
- En C ++ 11, `std::move` una función de biblioteca estándar que tiene un único propósito convertir su argumento en un `r-value`.

**Ejemplo:**

```cpp
#include <iostream>
#include <utility>
#include <vector>
#include <string>
using namespace std;

int main()
{
  string str = "Hello";
  vector<string> v;

  v.push_back(str);
  cout << "Después añadir a nuestro vector, str es \"" << str << "\"\n";

  v.push_back(move(str));
  cout << "Despues de move(), str es \"" << str << "\"\n";

  cout << "Los valores de nuestros vectores son \"" << v[0]
       << "\", \"" << v[1] << "\"\n";

  return 0;
}
```

Resultado

```bash
Después añadir a nuestro vector, str es "Hello"
Despues de move(), str es ""
Los valores de nuestros vectores son "Hello", "Hello"
```

---

## Investigar, describir e implementar un ejemplo usando el contructor move (6)

Siguiendo con el tour de **"Aprendiendo C++**🤠**"** veremos la importancia de referencia rvalue, el mejor uso `rvalue reference` es un contructor de movimiento.

**Beneficios:**

- Evitamos una sobrecarga de rendimiento ya que usamos el `move constructor` en vez de el `copy constructor`.

**Ejemplo:**

```cpp
#include <iostream>
#include <vector>
using namespace std;

class A
{
  int *ptr;

public:
  A()
  {
    //Constructor predeterminado
    cout << "Calling Default constructor\n";
    ptr = new int;
  }

  A(const A &obj)
  {
    // Constructor copia
    // se crea una copia del objeto
    this->ptr = new int;
    cout << "Calling Copy constructor\n";
  }

  A(A &&obj)
  {
    // Move constructor
    // Simplemente cambiara los recursos
    // sin crear una copia
    cout << "Calling Move constructor\n";
    this->ptr = obj.ptr;
    obj.ptr = NULL;
  }

  ~A()
  {
    // Destructor
    cout << "Calling Destructor\n";
    delete ptr;
  }
};

int main()
{

  vector<A> vec;
  vec.push_back(A());

  return 0;
}
```

---

## Investigar, describir e implementar un ejemplo usando el operador de asignación move (move assigment constructor) (6)

Finalmente el **operador de asignacion de movimiento** se utiliza para transferir un objeto temporal a un objeto existente.

¿NO LO SABIAS?

Si el operador de asignacion de movimiento no esta definido explicitamente**("Osea si no lo codeas")**, el compilador lo genera de manera implicita.

**Operador de asignacion de movimiento. Buenas practicas** 👨‍💻

- Recordemos que este operador no debe llamarse asi mismo
- En la instrucción condicional, libere los recursos (como la memoria) del objeto al que se está asignando.
- Devuelve una referencia al objeto actual, como se muestra en el siguiente ejemplo:
