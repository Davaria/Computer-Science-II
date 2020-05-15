# Algoritmo de ordenamiento Selection Sort
def SelectionSort(array):
  for i in range(len(array)):
    # Reto completado
    print(array)
    # pos almacenara la menor posicion encontrada
    pos = FindSmallest(array, i)
    array[i], array[pos] = array[pos], array[i] 
  # Ya ordenado nuestro arreglo lo imprimimos
  printArray(array)


# Funcion para encontrar la menor posicion
def FindSmallest(array, i):
  aux = i
  for j in range(i + 1, len(array)):
    if array[aux] > array[j]:
      aux = j
  return aux

# Funcion para imprimir arreglos
def printArray(array):
  for i in range(len(integers)):
    print("%d"%integers[i]),

if __name__ == "__main__":
  integers = [2,5,1,9,7,8];
  SelectionSort(integers)