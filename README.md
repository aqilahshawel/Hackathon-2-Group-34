## Hackathon-2-Group-34

### Group Members: 
  1. Nadiatul Fakhira Binti Zakpar, 160307
  2.  Nur Aina Sofeya Binti Mohamed Yusof,160423
  3.  Aqilah Syazwani Binti Shawel, 160462
  
## Table Of Contents 
  + Introduction
  + Features
  + Storyline
  + Implementation of Object-Oriented Programming
  + Impact of Linked-List in the Game
  + How to Play the Game
  + Credits

## Introduction
  This text based game takes the player into a coded world where they would navigate through a storyline to learn a part of their personality. Games are becoming more advanced nowadays especially with the evolvement of Artificial Intelligence, games are even playable with a small device in hand. 

## Features
  For the features of our game, we focused on how the storyline would help in processing the outcome of the end game. Our game analyzes the choice players made throughout the game and the decision result is based on it. There are 3 choices for the player to choose for each questions. 
  We designed each choice represent different category.
  - Choice 1 represents the first category personality which is joy and happines.
  - Choice 2 represents strict and boastfullness.
  - Choice 3 represent calm and harmony personality.
  Other than than, we also have other 3 features such as:
  - to restart the game
  - to enter new player
  - to exit the game
  Besides that, we add 2 visual text files to have a better good interface game and read the scene from 7 text files to display the flow of the storyline. 
  
  However, one of the drawback for our game is that it does not have a wide option when it comes to the storyline, which it would involve more complex coding and consume more time.



## Storyline
  The timeline for this game takes back to a memory when the player is still a middle school student with an active relationship with their neighbours.
  
  The choice picked by the players won't affect the storyline except for one part of the game, which is the second scenario however it only affects the end of scenario 2 only, and then it still continuing the same scenario 3 regardless.



## Implementation of Object-Oriented Programming
   1. Class
   * There are three classes used in this game named Game, ResultGame, ListNode and LinkedList. The base class is the Game class where it focusing on producing a basic game layout. Game class has two private members variables which are name and age. In its public access specifier, it has eight methods with constructor and destructor. On the other hand, ResultGame class is the derived class. This class focused on calculating the scores to give the right output to the users. This class also inherits public of Game class. The last two classes are called ListNode and LinkedList class. These two classes are for us to implement the use of linked-list. 
2. Object
* There is only one object in this game where we named it as 'game'.
  
## Impact of Linked-List in the Game
  The usage of linked-list starts with ListNode class. The class `ListNode` represents a node in a linked list. It contains two member variables:

1. `answer`: This variable stores the data (of type `T`) associated with the node. It represents the answer value or any other information you want to store in the node.

2. `next`: This is a pointer to the next node in the linked list. It is of type `ListNode<T>*`. By using this pointer, each node in the linked list is connected to its adjacent node.

The constructor `ListNode(T nodeAnswer)` initializes a `ListNode` object by assigning the provided `nodeAnswer` value to the `answer` member variable and setting the `next` pointer to `nullptr` (indicating that it is not currently connected to any other node).

Essentially, this class provides the building blocks for creating a linked list, where each node holds a value (`answer`) and a pointer (`next`) to the next node in the list. By linking multiple `ListNode` objects together through the `next` pointers, you can construct a linear data structure known as a linked list, allowing efficient insertion and removal of elements.

ListNode class then need another class named LinkedList class to implement linked list data structure. The class `LinkedList` represents a linked list data structure. It contains three member variables:

1. `head`: This is a pointer of type `ListNode<T>*` that points to the first node (head) of the linked list.

2. `tail`: This is a pointer of type `ListNode<T>*` that points to the last node (tail) of the linked list.

The class `LinkedList` provides the following functionality:

1. Constructor: The constructor initializes an empty linked list by setting both the `head` and `tail` pointers to `nullptr`.

2. Destructor: The destructor is responsible for freeing the memory allocated for the linked list. 

3. `append(T)`: This function is used to insert a new node with the provided value (`T`) at the end of the linked list. It creates a new `ListNode` object with the provided value and updates the `next` pointers accordingly to maintain the correct order of nodes in the list.

4. `getSum()`: This function traverses the linked list and calculates the sum of all the `answer` values stored in the nodes. It starts from the `head` node and iteratively moves through the list by following the `next` pointers until reaching the end (the node where `next` is `nullptr`). It adds up the `answer` values and returns the sum.

In summary, the `LinkedList` class provides the basic functionality to create and manipulate a linked list. It allows for appending nodes to the end of the list and calculating the sum of values stored in the nodes. 

## How to Play the Game
  The game starts with the introduction of the game followed by asking the users their name and age. Then, game continue to give a situation with three choices of answers. The questions continue until the users completed all questions. The player summary will be displayed first before the results are shown. Lastly, players can decide to restart the game or exit the game.
  
## Credits
  Our dedication to make a personality quiz game started when there was a trend among teenagers where they play an interactive Korean quiz game with outstanding visuals and aesthetic theme and storylines. Thus we chose flower as our theme in assigning the personalities.
