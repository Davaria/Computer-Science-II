#include "../include/headers/Iterator.h"

template<typename T>
void Iterator<T>::operator=(Nodo<T> * node){
  ptrNode = node;
}

template<typename T>
void Iterator<T>::operator++(){
  ptrNode = ptrNode->getNext();
}

template<typename T>
T Iterator<T>::operator*(){
  return ptrNode->getElement();
}

template<typename T>
bool Iterator<T>::operator==(Nodo<T>* node){
  return (ptrNode->getNext() == node->getNext());
}

template<typename T>
bool Iterator<T>::operator!=(Nodo<T>* node){
  return (ptrNode != node);
}

