#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Nodo.h"
using namespace std;

template<typename T>
class LinkedList
{
  Nodo<T> *head;
  Nodo<T> *finalList;
  int size;

public:
  LinkedList();
  LinkedList(T);
  ~LinkedList();
  void insert(T);
  void remove(int);
  void print();
  Nodo<T> *beginList();
  Nodo<T> *endList();

};

#endif