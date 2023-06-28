#include "LinkedList.h"
#include "LinkedList.cpp"
#include "Game.h"
#include "ResultGame.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

const int NUMSCENES = 7;

//Function prototypes
void displayScene(int);   

int main()
{
  //Define a LinkedList object
  LinkedList<int> list;
  
  //Creating 'game' as instance of ResultGame
  ResultGame game(&list);
    
  //display game intro
  game.start();
    
  //get playerInfo
  game.getPlayerInfo();
  
  top:
  //start display scene
  for (int i = 0; i < NUMSCENES; i++)
  {
    int answer;
    if (i==1)
    {
        displayScene(i);
        cin>>answer;
        //implement dynamic linked list to append nodes
        list.append(answer);    
                
        if (answer== 1)
        {
            cout<<endl;
            game.print("Peter pulled out a paper, you won! :) \n",50);
            game.print("Peter gives you his money to pay for your lunch. YEAYYY!\n" ,50);
        }
        else if (answer == 2)
        {
          cout<<endl;
            game.print("Peter pulled out a paper, you lost. :( \n",50);
            game.print("You have to pay for your lunch using your own pocketmoney. HUHUHU ;(( \n", 50);
        }
        else if (answer == 3)
        {
            cout<<endl;
            game.print("Peter pulled out a paper, it's a draw. :) \n",50);
            game.print("Peter decided to pay for your lunch anyways as a kind gesture. YEAYYY!\n", 50);
        }
    }
    else 
    {
        displayScene(i);
        cin>>answer;
        //implement dynamic linked list to append nodes
        list.append(answer);     
    }     
  }
  
    //display playerInfo
    game.displayInfo(); 

    // Checking the result
    game.checkPersonality();
    
    //closing
    game.end();

	//to clear the linked list, and start new linkedlist for new round of game
        list.clear();
        //reinitializes the playerAnswers list as an empty list. 
    //This ensures that the list is completely cleared and ready to store answers from the new player. 
        list=LinkedList<int>();
 
    //Checking to know the player want to start again or exit
    int choice;
    cin >> choice;
    
    while (choice !=3)
    {
        if (choice == 1)
       {
          goto top;
       }
       else if (choice == 2)
       {
          game.getPlayerInfo();
          goto top;
     }
       else if (choice == 3)
       {
          return 0;
       }
       else
       {
          cout << "Wrong choice. Please choose either 1 or 2. Enter your choice again: ";
          cin >> choice;
        }
    }
     
    return 0;
}


//implement reading textfiles
void displayScene(int sceneIndex)
{
  string sceneFiles[NUMSCENES] = {"scenario1.txt", "scenario2.txt", "scenario3.txt", "scenario4.txt", "scenario5.txt", "scenario6.txt", "scenario7.txt"};
    fstream input(sceneFiles[sceneIndex]);
    
    if (input.fail())
    {
        cout << "Failed to open the file: " << sceneFiles[sceneIndex] << endl;
        return;
    }

    string line;
    while (getline(input, line))
    {
      LinkedList<int> list;
      ResultGame game(&list);
      //call function print typewriting to display content in textfiles with effect typing
      game.print(line, 50);
      cout<<endl;
    }

    input.close();
}
