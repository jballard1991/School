#include <string>
using namespace std;
class TV {
public:
	int channel,volume,tvnum,modch,setvol,setch;
	bool on;
	TV(bool,int,int);
	~TV(void);
	void manipulateTv(int, int);
	void channelUp();
	void channelDown();
	void volumeUp();
	void volumeDown();
	void turnOn();
	void turnOff();
	void display();  // will display if the tv is on or not, the channel that is showing, and the volume setting
	void setChannel();
	void setVolume();
private:
	bool state;
	int ch,vol;
	string manipulate;
};
