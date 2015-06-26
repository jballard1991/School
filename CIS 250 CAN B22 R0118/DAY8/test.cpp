#include <iostream>
#include <string>
#include "TV.h"
using namespace std;

TV::TV(bool on, int channel, int volume) {
	state = on;
	ch = channel;
	vol = volume;
}


TV::~TV(void) {
}

void TV::manipulateTv(int modch,int tvnum)  {
	switch (modch) {
	case 1:
		channelUp();
		break;
	case 2:
		channelDown();
		break;
	case 3:
		volumeUp();
		break;
	case 4:
		volumeDown();
		break;
	case 5:
		turnOff();
		break;
	case 6:
		turnOn();
		break;
	case 7:
		display();
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
	cout << "Tv is on: " << state << endl << "Volume is at " << vol << endl << "Channel is " << ch << endl;
}


int main(void) {

/*	TV tv1(false,0,0);
	tv1.turnOn();
	tv1.channel = 30;
	tv1.volume = 3;
	tv1.display();

	TV tv2(false,0,0);
	tv2.channelUp();
	tv2.channelUp();
	tv2.volumeUp();
	tv2.display();
*/

string cmd;

TV tv(false,0,0);
while (1) { 
cout << "Command: ";
cin >> cmd;
// cout << endl << cmd << endl;
if (cmd == "chup") {
	tv.manipulateTv(1,0);	
} 
else if (cmd == "chdown") {
	tv.manipulateTv(2,0);
} 
else if (cmd == "voldown") {
        tv.manipulateTv(3,0);
}
else if (cmd == "voldown") {
        tv.manipulateTv(4,0);
}
else if (cmd == "off") {
	tv.manipulateTv(5,0);
}
else if (cmd == "on") {
        tv.manipulateTv(6,0);
}
else if (cmd == "display") {
        tv.manipulateTv(7,0);
} else { 
cout << "try: chup chdown volup voldown on off display " << endl;
}


}



}
