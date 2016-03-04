/*I affirm that all code given below was written solely by me, Julia Abbott, and that any help I received adhered to the rules stated for this exam. */
#include"Event.h"

#include<string>
#include<vector>
#ifndef _VENUE_H_
#define _VENUE_H_

using namespace std;
class Venue
{
private:
	int numEvents = 12;
	Event scheduledEvents[12];


public:
	bool validTime(int time);
	void addEvent(int time, string name);
	Event findEvent(int time);
	Event findEvent(string name, Event arry[]);

	//construct the array scheduledEvents
	void setScheduledEvents();

	//get the items stored in the array
	Event getScheduledEvents1(int time);

	//get the items stored in the array
	Event Venue::getScheduledEvents();
};
#endif