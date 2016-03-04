/*I affirm that all code given below was written solely by me, Julia Abbott, and that any help I received adhered to the rules stated for this exam. */
//other than the main program, which the instructions said to save off in main.cpp
#include<iostream>
#include<string>
#include<vector>
#include"Event.h"
#include"Venue.h"
using namespace std;

int main()
{
	Venue theSpot;
	theSpot.setScheduledEvents();
	theSpot.addEvent(10, "Coffee Hour");    //Should work
	theSpot.addEvent(11, "Brunch w/ Bob");  //Should work
	theSpot.addEvent(11, "Bingo"); //Shouldn't work


	std::cout << theSpot.findEvent(10, theSpot.getScheduledEvents()) << endl; //Should find Coffee Hour
	std::cout << theSpot.findEvent("Brunch w/ Bob", theSpot.getScheduledEvents()) << endl;  //Should find 11 o'clock
	std::cout << theSpot.findEvent("Bingo", theSpot.getScheduledEvents()) << endl; //Should print -1, because Bingo ain't there!


	return 0;
}