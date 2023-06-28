#ifndef RESULTGAME_H
#define RESULTGAME_H
#include "LinkedList.h"
#include "Game.h"
#include <chrono>
#include <thread>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//derived class
class ResultGame : public Game
{
  private:
    LinkedList<int>* list;
    
  public:
    
    //Construstor
    ResultGame(LinkedList<int>* linkedList)
    {
      list = linkedList;
    }
    
    //function to display effect type writing in video game
      void print(const string& text, int delay) 
      {
          for (char c : text) 
      {
              cout << c << flush;
              this_thread::sleep_for(chrono::milliseconds(delay));
          }
        } 
    
    //start the game
    void start()
    { 
        fstream input;
        input.open("intro.txt");
        if (input.fail())
        {
            cout << "Failed to open the file: " << endl;
            return;
        }

        string line;
        while (getline(input, line))
        {
            cout<<line<<endl;
        }
        input.close();
      
        cout << endl;
        print("Hello, user! Nice to meet you.\n",50);
        print("Welcome to InnerQuest Game. In this game, we will help you to discover your own personality.\n",50);
        cout<<"\nPress Enter to continue."<<endl;
        cin.get();
        print("Imagine yourself involved in the situation that we have given and answer all questions that we \n",50); 
        print("will ask. You have to be true to yourself, friends!\n",50);
        cin.get();
        print("To start the game, we need to know your name.\n",50);
        
   }
    
    void getPlayerInfo()
    {
        print("Please enter your name here: ",50);
        string name;
        cin>>name;
        Game::setName(name);
        print("\nHi ",50);
        print(name,50);
        print("! We also need your age, buddy! \n",50);
        print("Tell me your age here: ",50);
        int age;
        cin >> age;
        Game::setAge(age);
    }
    
    //display player info
    void displayInfo()
    {
        cout <<endl;
        cout <<"*******************************************************"<<endl;
        cout <<"                     SUMMARY PLAYER                    "<<endl;
        cout <<"*******************************************************"<<endl;
        cout<<"Player Name: "<< Game::getName()<<endl;
        cout<<"Player Age: " << Game::getAge()<<endl;
        cout <<endl;
        cout <<"*******************************************************"<<endl;
        cout <<"                 YOUR RESULT PERSONALITY               "<<endl;
        cout <<"*******************************************************"<<endl;
    }
    
    //check sumAnswer to categorize the personality
    void checkPersonality()
    {
        int totalChoice1, totalChoice2, totalChoice3;
        //implement linked list to getSum nodes
        list->countChoices(totalChoice1, totalChoice2, totalChoice3);
        
        //if player choose majority answer no 1, 
        //he gets personality category 1
        if ((totalChoice1 > totalChoice2) && (totalChoice1 > totalChoice3))                 
        {
          cout<<endl;
          print("A Blazing Star flower is what you are!\n", 50);
          print("You are a happy and cheerful person.\n", 50);
          print("You like positivity and things get out of hand you will lift the mood by making jokes.\n", 50);
          print("You savour happy moments with the people around you the most.\n", 50);
          print("A blazing star flower symbolizes blissfulness and joy.\n", 50);
          print("Remember to take a break from time to time as it is crucial for your happiness.\n", 50);
        }
        
        //if player choose majority answer no 2, 
        //he gets personality category 2
        else if ((totalChoice2 > totalChoice1) && (totalChoice2 > totalChoice3))    
        {
          cout<<endl;
          print("Fantastic! You're just like a Hydrangea!\n", 50);
          print("You don't like it if your plans are altered at the last minute.\n", 50);
          print("You have great discipline and you will stick to it no matter what.\n", 50);
          print("Most of the time you'd take care others wellbeing and have a great pride for it.\n", 50);
          print("Hydrangea symbolizes strictness and boastfullness.\n", 50);
          print("Allow yourself to let loose at times as it is not a crime~~~\n", 50);
        }
        
        //if player choose majority answer no 3, 
        //he gets personality category 3
        else                             
        {
          cout<<endl;
          print("Mesmerising, you're just like a Cosmos flower!\n", 50);
          print("Your calm mind brings inner strength and self-confidence to yourself.\n", 50);
          print("You may like to listen to Mozart when life is getting out of hand. \n", 50);
          print("You believe in your capacity to cope with occasional things that go wrong.\n", 50);
          print("Cosmos just like the name represents order, harmony and balance.\n", 50);
          print("Life may be unfair but it is up to us in how we handling it.\n", 50);
        }
    }
      
    //the end of the game
    void end()
    {
        cout <<endl;
        cout <<"*******************************************************"<<endl;
        cout <<"                         THE END                       "<<endl;
        cout <<"*******************************************************"<<endl;
        print("Thank you for playing this game! Hope you are having fun and enjoy this game :D \n", 50);
        print("Press Enter to see a suprise gift.\n", 50);
        cin.get();
        cin.get();
        fstream input;
        input.open("gift.txt");
        if (input.fail())
        {
            cout << "Failed to open the file: " << endl;
            return;
        }

        string line;
        while (getline(input, line))
        {
            cout<<line<<endl;
        }
        input.close();
      
        print("Please enter your choice: \n", 50);
        cout <<"1. Restart the game. " << endl;
        cout <<"2. Enter new player. " << endl;
        cout <<"3. Exit the game. " << endl;
          
    }
      
  
};
#endif
