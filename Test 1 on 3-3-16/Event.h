/*I affirm that all code given below was written solely by me, /
Julia Abbott, and that any help I received adhered to the rules stated for this exam. */

#include<string>
#include<vector>

using namespace std;

#ifndef _EVENT_H_
#define _EVENT_H_

class Event
{
private:
	int Time;
	string Title;

public:


	//overloead constructor
	Event(int time, string name)
	{
		Time = time;
		Title = name;
	};
	//create constructor that will be the default
	Event()
	{
		Time = -1;
		Title = "free";
	};

	//function to return time
	int getTime()
	{
		return Time;
	}
	//function to get title
	string getTitle()
	{
		return Title;
	}

	//function to set time
	void setTime(int t);

	//function to set title
	void setTitle(string name);

};


#endif