#include <iostream>
using namespace std;

int main(){
  int x = 0;

  while (++x < 10);
  
  printf("x is %i", x);

  for (int i = 0; i < 10; i++)
    printf("%i", i);
    
  return 0;
}