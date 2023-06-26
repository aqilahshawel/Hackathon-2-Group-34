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
    ListNode<T>* newNode;
    ListNode<T>* nodePtr;
        
    newNode = new ListNode<T>(newAnswer);
    newNode->answer = newAnswer;
    newNode->next = nullptr;

   if (head == nullptr) 
   {
      head = newNode;
      tail = newNode;
    } 
	else 
    {
    	tail->next = newNode;
    	tail = newNode;
//        nodePtr = head;
//            
//        while (nodePtr->next != nullptr) 
//		{
//            nodePtr = nodePtr->next;
//        }
//            nodePtr->next = newNode;
    }
        
}

//**************************************************
// The traverseAndSum function traverse the list and 
// sum all answer in the node
//**************************************************

template <class T>
int LinkedList<T>:: getSum()
{
	ListNode<T>* nodePtr;
	
	nodePtr = head;
	
	int sum = 0;
	
	while (nodePtr != nullptr)
	{
		sum+=nodePtr->answer;
		nodePtr = nodePtr->next;
	}
	return sum;
}


//**************************************************
// Destructor *
// This function deletes every node in the list. *
//**************************************************

template <class T>
LinkedList<T>::~LinkedList()
{
 ListNode<T> *nodePtr; // To traverse the list
 ListNode<T> *nextNode; // To point to the next node

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
