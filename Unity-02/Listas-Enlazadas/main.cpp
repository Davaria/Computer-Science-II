#include <iostream>
#include "./src/LinkedList.cpp"
#include "./src/Nodo.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
  LinkedList *p0 = new LinkedList(6);
  p0->insert(5);
  p0->insert(4);
  p0->insert(3);
  p0->insert(2);
  p0->insert(1);
  p0->insert(7);
  p0->print();
  p0->remove(3);
  p0->print();

  return 0;
}
