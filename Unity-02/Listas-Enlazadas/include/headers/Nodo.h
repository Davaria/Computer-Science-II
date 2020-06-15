#ifndef NODO_H
#define NODO_H
#include "string"

using namespace std;

class Nodo
{
	int elem;
	Nodo *next;

public:
	Nodo(int);
	int getElement();
	void setElement(int);
	Nodo *getNext();
	void setNext(Nodo *);
};

#endif