#include "../include/headers/LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList()
{
  head = nullptr;
  finalList = nullptr;
  size = 0;
}

template<typename T>
LinkedList<T>::LinkedList(T value)
{
  head = new Nodo<T>(value);
  finalList = nullptr;
  size = 1;
}

template<typename T>
LinkedList<T>::~LinkedList()
{
  Nodo<T> *cursor;
  while (head != nullptr)
  {
    cursor = head;
    cursor = head->getNext();
    delete cursor;
  }
}
template<typename T>
void LinkedList<T>::insert(T value)
{
  if (!size)
    head = new Nodo<T>(value);
  else
  {
    Nodo<T> *cursor = head;
    Nodo<T> *previous = nullptr;
    while (cursor != nullptr && cursor->getElement() <= value)
    {
      previous = cursor;
      cursor = cursor->getNext();
    }
    Nodo<T> *temp = new Nodo<T>(value);
    if (previous == nullptr)
    {
      temp->setNext(head);
      head = temp;
    }
    else
    {
      temp->setNext(cursor);
      previous->setNext(temp);
    }
  }
  size++;
}

template<typename T>
void LinkedList<T>::remove(int index)
{
  Nodo<T> *cursor = head;
  if (index != 0)
  {
    for (int i = 0; i < --index; i++)
      cursor = cursor->getNext();
    Nodo<T> *NodoRem = cursor->getNext();
    cursor->setNext(NodoRem->getNext());
    cursor = NodoRem;
  }
  else
    head = head->getNext();
  delete cursor;
  size--;
}

template<typename T>
void LinkedList<T>::print()
{
  Nodo<T> *cursor = head;

  for (int i = 0; i <= size - 1; i++)
  {
    cout << cursor->getElement() << "  ";
    cursor = cursor->getNext();
  }
  cout << endl;
}
template<typename T>
Nodo<T>* LinkedList<T>::beginList()
{
  return head;
}

template<typename T>
Nodo<T>* LinkedList<T>::endList()
{
  return finalList;
}