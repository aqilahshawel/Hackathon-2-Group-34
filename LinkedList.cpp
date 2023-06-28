#include "LinkedList.h"
#include <iostream>
#include <string>
using namespace std;

//**************************************************
// appendNode appends a node containing the value *
// passed into newValue, to the end of the list. *
//**************************************************

template <class T>
void LinkedList<T>:: append(T newAnswer) 
{
    ListNode* newNode;
    ListNode* nodePtr;
        
  newNode = new ListNode;
    newNode->answer = newAnswer;
    newNode->next = nullptr;

    if (head == nullptr) 
  {
        head = newNode;
    }
  else 
  {
        nodePtr = head;
            
        while (nodePtr->next != nullptr)
    {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = newNode;
    }
}

//**************************************************
// The countChoice function traverse the list and 
// count each total choice to determine which choice is the highest
//**************************************************

template <class T>
void LinkedList<T>:: countChoices(T& totalChoice1, T& totalChoice2, T& totalChoice3)
{
    ListNode* nodePtr = head;
    totalChoice1 = totalChoice2 = totalChoice3 = 0;

    while (nodePtr != nullptr) 
  {
        switch (nodePtr->answer) 
    {
            case 1:
                totalChoice1++;
                break;
            case 2:
                totalChoice2++;
                break;
            case 3:
                totalChoice3++;
                break;
            default:
                break;
        }
        nodePtr = nodePtr->next;
    }
}


//**************************************************
// Destructor *
// This function deletes every node in the list. *
//**************************************************

template <class T>
void LinkedList<T>::clear()
{
 ListNode *nodePtr; // To traverse the list
 ListNode *nextNode; // To point to the next node

 // Position nodePtr at the head of the list.
 nodePtr = head;

 // While nodePtr is not at the end of the list...
 while (nodePtr != nullptr)
 {
 // Save a pointer to the next node.
 nextNode = nodePtr->next;

 // Delete the current node.
 delete nodePtr;

 // Position nodePtr at the next node.
 nodePtr = nextNode;
 }
}
