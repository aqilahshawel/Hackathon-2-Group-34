#ifndef TOTALANSWER_H
#define TOTALANSWER_H
#include "LinkedList.h"
#include <iostream>
#include <string>
using namespace std;

template <class T>
class TotalAnswer
{
	private:
		LinkedList<T>* list;
		
	public:
		TotalAnswer(LinkedList<T>* linkedList)
		{
			list = linkedList;
		}
		
		void checkPersonality()
		{
			T sum = list->getSum();
			
			if (sum <= 7)                  // get personality category 1
			{
				cout<<"A Blazing Star flower is what you are!"
				<< "I like positivity and things get out of hand I will lift the mood by making jokes."
				<<"I savour happy moments with the people around me the most."
				<<" A blazing star flower symbolizes blissfulness and joy,\n Remember to take a break from time to time as it is crucial for your happiness."
				<<endl;
			}
			else if ((sum <= 14) && (sum>7))   // get personality category 2
			{
				cout<<"Fantastic! You're just like a Hydrangea!\n"
				<<" I don't like it if my plans are altered at the last minute."
				<< "You have great discipline and you will stick to it no matter what.\n"
				<<"Most of the time you'd take care others wellbeing and have a great pride for it.\n"
				<<"Hydrangea symbolizes strictness and boastfullness, \n Allow yourself to let loose at times as it is not a crime~"<<endl;
			}
			else                           // get personality category 3
			{
				cout<<"Mesmerising, just like a Cosmos flower.\n "
				<< "I love how calming this melody is. \n"
				<<"I wonder if the ride to go back home will be smooth. \n"
				<<"You may like to listen to Mozart when life is getting out of hand. \n"
				<<"Cosmos just like the name represents order and harmony, life may be unfair but it is up to us in handling it." ;
			}
		}
		
	
};
#endif


