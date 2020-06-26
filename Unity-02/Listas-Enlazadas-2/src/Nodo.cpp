#include "../include/headers/Nodo.h"
template<typename T>
Nodo<T>::Nodo()
{
	// elem = NULL;
	next = nullptr;
}
template<typename T>
Nodo<T>::Nodo(T number)
{
	elem = number;
	next = nullptr;
}

template<typename T>
T Nodo<T>::getElement()
{
	return elem;
}

template<typename T>
void Nodo<T>::setElement(T number)
{
	elem = number;
}
template<typename T>
Nodo<T> *Nodo<T>::getNext()
{
	return next;
}

template<typename T>
void Nodo<T>::setNext(Nodo *n)
{
	next = n;
}