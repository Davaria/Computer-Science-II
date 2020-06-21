#ifndef ITERATOR_H
#define ITERATOR_H
#include "Nodo.h"

template<typename T>
class Iterator
{
	T elem;
	Nodo<T> *ptrNode;

public:
	void operator =(Nodo<T>*);
	void operator ++();
	T operator *();
  bool operator ==(Nodo<T>*);
  bool operator !=(Nodo<T>*);
};

#endif