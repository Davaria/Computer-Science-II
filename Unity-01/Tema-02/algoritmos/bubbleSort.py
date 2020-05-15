def bubbleSort(array):
  length = len(array)
  for i in range(length):
    print(array);
    comparise = True
    for j in range(0,length - 1 -i):
      if array[j] > array[j+1]:
        array[j+1], array[j] = array[j], array[j+1]
        comparise = False
    if comparise:
      break
        
  

if __name__ == "__main__":
  integers = [5,2,3,4,1,1000,999]
  bubbleSort(integers)
  print("El arreglo es: ");
  for i in range(len(integers)):
    print("%d "%integers[i]),
  
  