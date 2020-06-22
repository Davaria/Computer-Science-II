#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Nodo.h"
#include "Iterator.h"
using namespace std;

template<typename T>
class LinkedList
{
  Nodo<T> *head, *finalList;
  Iterator<T> it;
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