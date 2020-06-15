#include "../include/headers/Nodo.h"

Nodo::Nodo(int number)
{
	elem = number;
	next = nullptr;
}

int Nodo::getElement()
{
	return elem;
}

void Nodo::setElement(int number)
{
	elem = number;
}

Nodo *Nodo::getNext()
{
	return next;
}

void Nodo::setNext(Nodo *n)
{
	next = n;
}