/*I affirm that all code given below was written solely by me,/
Julia Abbott, and that any help I received adhered to the rules stated for this exam. */

#include<iostream>
#include<vector>
#include"Event.h"
#include"Venue.h"

using namespace std;

//get the items stored in the array
Event Venue::getScheduledEvents1(int time)
{
	return scheduledEvents[time];
}

//get the items stored in the array
Event Venue::getScheduledEvents()
{
	for (int j = 0; j < numEvents; j++)
	{
		return scheduledEvents[j];

	}
}
//construct the array scheduledEvents
void Venue::setScheduledEvents()
{
	for (int i = 0; i < numEvents; i++)
	{
		scheduledEvents[i] = Event();
	}
}

//checks to see if the time is valid; if not, prints a message saying so
bool Venue::validTime(int time)
{
	//create dummy function to store time in
	int i = time;
	if (scheduledEvents[i].getTime() == -1)
		return true;
	else
		return false;
}

//adds an event to the list 
void Venue::addEvent(int time, string name)
{
	//checks to see if time is already taken
	if (validTime(time) == true)
	{
		//creates placeholder variable to store data
		Event newEvent;
		//sets name and title to newEvent
		newEvent.setTitle(name);
		newEvent.setTime(time);
		//adds value to scheduledEvents vect
		scheduledEvents[time] = newEvent;
	}
}

Event Venue::findEvent(int time)
{
	//create a dummy construct
	int i = time;

	Event test = Venue::getScheduledEvents[i];
	//if there is a matching time, cout the name and time.
	if (test.getTime() == time)
		return test;
	else
		return Event();

	//Else, cout -1
}

Event Venue::findEvent(string name, Event arry[])
{
	//create dummy variable to store name in
	string j = name;
	//check array for matching name
	for (int i = 0; i < 12; i++)
	{
		if (arry[i].getTitle() == name)
			return arry[i];
		else
			return Event();
	}
	//if there is a matching name, cout the name and time.
	//Else, cout -1
}
