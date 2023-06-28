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
  + Insight 
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
  
  However, one of the drawbacks for our game is that it does not have a wide option when it comes to the storyline, which it would involve more complex coding and consume more time.

  Our game also adds a little element where we display images of flowers made by symbols that we have obtained from https://www.asciiart.eu/plants/flowers .



## Storyline
  The timeline for this game takes back to a memory when the player is still a middle school student with an active relationship with their neighbours.
  
  The choice picked by the players won't affect the storyline except for one part of the game, which is the second scenario however it only affects the end of scenario 2 only, and then it still continuing the same scenario 3 regardless.



## Implementation of Object-Oriented Programming
   1. Class
   * There are three classes used in this game named Game, ResultGame and LinkedList. The base class is the Game class which has two private members variables which are name and age. In its public access specifier, it has six methods with constructor and destructor. On the other hand, ResultGame class is the derived class. This class focused on layout of the game and  evaluating the total choice to determine which choice has the highest picked to give the right output to the users. This class also inherits public of Game class. The last classes are called LinkedList class which implement dynamic linked list with template. This classes are used to implement the use of linked-list in our game.
     
2. Object
* LinkedList<int> list : We are creating 'list' as an instance of the LinkedList class with the template parameter int. 
* ResultGame game : We are also creating 'game' as an instance of class ResultGame 
  
## Impact of Linked-List in the Game
  HOW DYNAMIC LINKEDLIST PLAY A MAJOR ROLE IN OUR GAME

  The LinkedList class, along with its member functions, provides the necessary functionality to manage and analyze the players' choices in our game. It allows us to keep track of the answers in a structured manner, count the total of each choice, and reset the list for new players. By using this class, we can efficiently handle the data related to player choices and make decisions based on the collected information.
  
  The usage of linked-list starts with private member varible of struct ListNode. The ListNode has two variables:

1. `answer`: This variable stores the data (of type `T`) associated with the node. It represents the answer value or any other information you want to store in the node.

2. `next`: This is a pointer to the next node in the linked list. By using this pointer, each node in the linked list is connected to its adjacent node.
   
3. `head`: Outside of the struct ListNode, there is a pointer that points to the first node (head) of the linked list.

  Next, for public member functions, there are 3 functions that play major role in our game:

  1. void append(T newAnswer): This function is used to append a new node containing the player's answer (newAnswer) to the end of the linked list. It ensures that the player's answer is added to the list, allowing you to keep track of the choices made by each player. This function is crucial for maintaining the order of player answers and building the linked list.

2. void countChoices(T& totalChoice1, T& totalChoice2, T& totalChoice3): This function traverses the linked list and counts the number of occurrences for each choice (1, 2, or 3). It updates the respective variables (totalChoice1, totalChoice2, totalChoice3) with the counts, allowing you to determine which choice is the most popular among the players. This function is essential for analyzing the distribution of choices made by the players.

3. void clear(): This function deletes every node in the linked list and clears it, effectively emptying the list. It is used when you want to start fresh with a new player or reset the game. By calling clear(), you remove all the previous player's answers and create an empty linked list ready to store new answers. This function ensures that the linked list is properly reset for the next player

## How to Play the Game
  The game starts with the introduction of the game followed by asking the users their name and age. Then, game continue to give a situation with three choices of answers. The questions continue until the users completed all questions. The player summary will be displayed first before the results are shown. Lastly, players can decide to restart the game or exit the game.

## Insights
Introduction of the game :
 ![Screenshot 2023-06-28 234230](https://github.com/aqilahshawel/Hackathon-2-Group-34/assets/117916285/075e1045-ae11-4f5c-90a0-594d478229bb)

Screenshots of results for our game :
  * Result and descriptions for Personality 1
  ![blazing star](https://github.com/aqilahshawel/Hackathon-2-Group-34/assets/117916285/c4c7f2b6-466f-436b-8b1f-3c0f4800c95f)
* Result and descriptions for Personality 2
![hydragea](https://github.com/aqilahshawel/Hackathon-2-Group-34/assets/117916285/cf9abde0-e8fc-434d-95c1-929eb195e8d3)
* Result and descriptions for Personality 3
  ![cosmos](https://github.com/aqilahshawel/Hackathon-2-Group-34/assets/117916285/e7c873a2-fdf6-4f7b-b780-d91cc27dac4a)


## Credits
  Our dedication to make a personality quiz game started when there was a trend among teenagers where they play an interactive Korean quiz game with outstanding visuals and aesthetic theme and storylines. Thus we chose flower as our theme in assigning the personalities as an attraction.
