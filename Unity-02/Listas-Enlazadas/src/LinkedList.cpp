#include "../include/headers/LinkedList.h"

LinkedList::LinkedList()
{
  head = nullptr;
  size = 0;
}

LinkedList::LinkedList(int value)
{
  head = new Nodo(value);
  size = 1;
}

LinkedList::~LinkedList()
{
  Nodo *cursor;
  while (head != nullptr)
  {
    cursor = head;
    cursor = head->getNext();
    delete cursor;
  }
}

void LinkedList::insert(int value)
{
  if (!size)
    head = new Nodo(value);
  else
  {
    Nodo *cursor = head;
    Nodo *previous = nullptr;
    while (cursor != nullptr && cursor->getElement() <= value)
    {
      previous = cursor;
      cursor = cursor->getNext();
    }
    Nodo *temp = new Nodo(value);
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

void LinkedList::remove(int index)
{
  Nodo *cursor = head;
  if (index != 0)
  {
    for (int i = 0; i < --index; i++)
      cursor = cursor->getNext();
    Nodo *NodoRem = cursor->getNext();
    cursor->setNext(NodoRem->getNext());
    cursor = NodoRem;
  }
  else
    head = head->getNext();
  delete cursor;
  size--;
}

void LinkedList::print()
{
  Nodo *cursor = head;

  for (int i = 0; i <= size - 1; i++)
  {
    cout << cursor->getElement() << "  ";
    cursor = cursor->getNext();
  }
  cout << endl;
}