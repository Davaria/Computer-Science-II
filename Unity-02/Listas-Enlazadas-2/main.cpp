#include <iostream>
#include "./src/LinkedList.cpp"
#include "./src/Nodo.cpp"
#include "./src/Iterator.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
  LinkedList<int> *intPtr = new LinkedList<int>(6);
  intPtr->insert(5);
  intPtr->insert(4);
  intPtr->insert(3);
  intPtr->insert(2);
  intPtr->insert(1);
  intPtr->insert(7);
  intPtr->printIterator();
  intPtr->remove(20);  
  intPtr->remove(3);
  intPtr->printIterator();


  LinkedList<float> *floatPtr = new LinkedList<float>(6.32);
  floatPtr->insert(5.12);
  floatPtr->insert(4.21);
  floatPtr->insert(3.12);
  floatPtr->insert(2.1);
  floatPtr->insert(1.00);
  floatPtr->insert(7.1);
  floatPtr->printIterator();
  floatPtr->remove(3);
  floatPtr->printIterator();

  return 0;
}
