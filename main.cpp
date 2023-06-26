#include "LinkedList.h"
#include "LinkedList.cpp"
#include "totalAnswer.h"
#include "playerInfo.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;


void menu();

int main()
{
	LinkedList<int> list;
    string line;
    int answer1, answer2, answer3, answer4, answer5, answer6, answer7;
    
    playerInfo player;
    
	top:
	//get player information
	player.getInfo();
	
	
	fstream input;
	
	//**************************
	//Reading and writing scene1
	//**************************
	
	input.open("scene1.txt");  

    if (input.fail()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }


    while (getline(input, line)) {
        
		cout << line << endl;
    }

    input.close();
    
    cin>>answer1;

    list.append(answer1);
    
    //**************************
	//Reading and writing scene2
	//**************************
	input.open("scene2.txt");  

    if (input.fail()){
        cout << "Failed to open the file." << endl;
        return 1;
    }


    while (getline(input, line)) {
        
		cout << line << endl;
    }

    input.close();
    
    cin>>answer2;

    list.append(answer2);
    
    //**************************
	//Reading and writing scene3
	//**************************
	input.open("scene3.txt");  

    if (input.fail()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }


    while (getline(input, line)) {
        cout << line << endl;
    }

    input.close();
    
    cin>>answer3;

    list.append(answer3);
    
    //**************************
	//Reading and writing scene4
	//**************************
	input.open("scene4.txt");  

    if (input.fail()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }


    while (getline(input, line)) {
        
		cout << line << endl;
    }

    input.close();
    
    cin>>answer4;

    list.append(answer4);
    
    //**************************
	//Reading and writing scene5
	//**************************
	input.open("scene5.txt");  

    if (input.fail()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }


    while (getline(input, line)) {
        
		cout << line << endl;
    }

    input.close();
    
    cin>>answer5;

    list.append(answer5);
    
    //**************************
	//Reading and writing scene6
	//**************************
	input.open("scene6.txt");  

    if (input.fail()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }


    while (getline(input, line)) {
        
		cout << line << endl;
    }

    input.close();
    
    cin>>answer6;

    list.append(answer6);
    
    //**************************
	//Reading and writing scene1
	//**************************
	input.open("scene7.txt");  

    if (input.fail()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }


    while (getline(input, line)) {
       
		cout << line << endl;
    }

    input.close();
    
    cin>>answer7;

    list.append(answer7);
    

    // Creating 'total' as instance of TotalAnswer with the LinkedList
    TotalAnswer<int> total(&list);

    // Checking the result
    total.checkPersonality();
 
	//Checking to know the player want to start again or exit
	int choice;
	menu();
	cin>>choice;
	if (choice == 1)
		goto top;
	
	else if (choice == 2)
		return 0;
	
	else
	{
		cout<<"Wrong choice. Please choose only either 1 or 2. Enter your choice again:";
	    cin>>choice;
	}
	   
    return 0;
}

void menu()
{
	cout << "Thank you for playing this game! From the storyline, it is actually a Personality Quiz to determine what type of flower you are.\n";
	cout << "Hope you are having fun and enjoy this game :D "<<endl;
    cout << "1. Restart again the game" <<endl;
    cout << "2. Exit the game."<<endl;
    cout << "Please enter your choice."<<endl;
}
