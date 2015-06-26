#include "TV.h"
using namespace std;
int main() {

	TV tv1(false,0,0);
	tv1.turnOn();
	tv1.channel = 30;
	tv1.volume = 3;
	tv1.display();

	TV tv2(false,0,0);
	tv2.channelUp();
	tv2.channelUp();
	tv2.volumeUp();
	tv2.display();



}
