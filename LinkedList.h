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
class LinkedList 
{
  private:
    struct ListNode 
  {
        T answer;
        ListNode* next;
    };

    ListNode* head;
    
  public:

  // Constructor
  LinkedList()
  { 
    head = nullptr; 
  }

  // Linked list operations
  void append(T); //to append node
  void countChoices(T&, T&, T&); // to count each total choice
  void clear();
  
  // Destructor
  ~LinkedList()
  {
    clear();
  }

};
#endif
