#ifndef NODO_H
#define NODO_H


template<typename T>
class Nodo
{
	T elem;
	Nodo *next;

public:
	Nodo(T);
	T getElement();
	void setElement(T);
	Nodo *getNext();
	void setNext(Nodo *);
};

#endif