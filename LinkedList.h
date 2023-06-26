#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<iostream>
#include<string>
using namespace std;

//*********************************************
// The ListNode class creates a type used to *
// store a node of the linked list. *
//*********************************************

template <class T>
class ListNode
{
  public:
    T answer; // Node value T of class personInfo -composition
    ListNode<T> *next; // Pointer to the next node

    //Constructor
    ListNode (T nodeAnswer)
   {
      answer = nodeAnswer;
      next = nullptr;
   }
};


//*******************
// LinkedList class
//*******************
template <class T>
class LinkedList
{
  private:
      ListNode<T> *head;
      ListNode<T> *tail;
  public:

  // Constructor
  LinkedList()
  { 
    head = nullptr; 
    tail = nullptr;
  }

  // Destructor
  ~LinkedList();

  // Linked list operations
  void append(T); //to insert node
  int getSum();//to traverse the list and sum all the answer

};
#endif

