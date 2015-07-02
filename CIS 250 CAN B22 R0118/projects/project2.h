#include <string>
using namespace std;
class heartRate { 
public:
	heartRate(int,int,int,string,string);
	int getYear();
	void setYear(int);
	int getDay();
	void setDay(int);
	int getMonth();
	void setMonth(int);
	string getFirstName();
	void setFirstName(string);
	string getLastName();
	void setLastName(string);
	int getMaxHeartRate();
	int getTargetHeartRate();
	string fN,lN;
	void setCyear(int);
private:
	string first,last;
	int cyear,birthMonth,birthDay,birthYear,maxHeart,targetHeart;
};
