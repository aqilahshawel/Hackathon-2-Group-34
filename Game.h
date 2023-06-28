#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <string>
using namespace std;

//base class
class Game 
{
private:
    string name;
    int age;

public:
  //constructor
  Game()
  {
    name = " ";
    age = 0;
  }
  
  //destructor
  ~Game()
  {
    name = " ";
    age = 0;
  }
  
  void setName(string n)
  {  name = n; }
  
  void setAge(int a)
  {  age = a;  }
  
  string getName()
  {  return name; }
  
  int getAge()
  {  return age;  }
    

};
#endif
