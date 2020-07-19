#ifndef LINKEDLIST_H  
#define LINKEDLIST_H
#include "Nodo.h"

using namespace std;

class LinkedList
{
  Nodo *head;
  int size;

public:
  LinkedList();
  LinkedList(int);
  ~LinkedList();
  void insert(int);
  void remove(int);
  void print();
};

#endif