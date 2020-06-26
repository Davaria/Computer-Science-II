#include <iostream>
#include "./src/LinkedList.cpp"
#include "./src/Nodo.cpp"
#include "./src/Iterator.cpp"
#include "./src/Point.cpp"
#include "string"
using namespace std;

int main(int argc, char const *argv[])
{
  LinkedList<string> *stringPtr = new LinkedList<string>("Perxita");
  stringPtr->insert("AuronPLay");
  stringPtr->insert("los problemas pa mi");
  stringPtr->printIterator();




  LinkedList<float> *floatPtr = new LinkedList<float>(6.32);
  floatPtr->insert(5.12);
  floatPtr->insert(1.00);
  floatPtr->insert(7.1);
  floatPtr->printIterator();
  floatPtr->remove(3);
  floatPtr->printIterator();

  // Point *q = new Point(2,4);
  // Point *r = new Point(2,4);
  // LinkedList<Point*> listPoint;
  // listPoint.insert(q);
  // listPoint.insert(r);
  // listPoint.printIterator();

  return 0;
}
