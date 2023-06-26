#ifndef PLAYERINFO_H
#define PLAYERINFO_H
#include <iostream>
#include <string>
using namespace std;

class playerInfo {
private:
    string name;
    int age;

public:
	playerInfo()
	{
		name = " ";
		age = 0;
	}
	
	~playerInfo()
	{
		name = " ";
		age = 0;
	}
	
    void getInfo() {
        cout << "To start the game, we need to know your name.\n";
		cout<< "Please enter your name here: ";
        getline(cin, name);
        cout << "\nWe also need your age, buddy!\n";
        cout << "Tell me your age here: ";
        cin >> age;
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
#endif
