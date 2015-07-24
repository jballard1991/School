#include <string>
#include "TV.h"


TV::TV(bool on, int channel, int volume) {
	state = on;
	ch = channel;
	vol = volume;
}


TV::~TV(void) {
}

void TV::manipulateTv(string modch,int tvnum)  {
	switch (modch) {
	case chup:
		tvnum.channelUp();
		break;
	case chdown:
		tvnum.channelDown();
		break;
	case volup:
		tvnum.volumeUp();
		break;
	case voldown:
		tvnum.volumeDown();
		break;
	case turnoff:
		tvnum.turnOff();
		break;
	case turnon:
		tvnum.turnOn();
		break;
	case display:
		tvnum.display();
		break;
	}
}

void TV::channelUp()  {
	ch = ch++;
}

void TV::channelDown()  {
	ch = ch--;
}

void TV::volumeUp()  {
	vol = vol++;
}

void TV::volumeDown()  {
	vol = vol--;
}

void TV::turnOn()  {
	state = true;
}
void TV::turnOff()  {
	state = false;
}

void TV::display()  {
	cout << endl << "Tv is on: " << state << endl << "Volume is at " << vol << endl << "Channel is " << ch << endl;
}
