#include <string>
#include <iostream>
#include "project2.h"
using namespace std;
heartRate::heartRate(int bD,int bM,int bY,string fN,string lN) {
	setFirstName(fN);
	setLastName(lN);
	setDay(bD);
	setMonth(bM);
	setYear(bY);
}

int heartRate::getYear() { 
	return birthYear;
}

int heartRate::getDay() { 
        return birthDay;
}


int heartRate::getMonth() { 
        return birthMonth;
}


void heartRate::setYear(int bY) {
	birthYear = bY;
}

void heartRate::setMonth(int bM) {
        birthMonth = bM;
}

void heartRate::setDay(int bD) {
        birthDay = bD;
}


string heartRate::getFirstName() {
	return first;
}

void heartRate::setFirstName(string) { 
	first = fN;
}

string heartRate::getLastName() {
        return last;
}

void heartRate::setLastName(string) {
        last = lN;
}

int heartRate::getMaxHeartRate() {
	return (220-(cyear-birthYear));
}

int heartRate::getTargetHeartRate() {
        return (220-(cyear-birthYear))/2;
}

void heartRate::setCyear(int cy) {
		cyear = cy;
}


int main (void) {

heartRate test(0,0,0," "," ");

string fN,lN;
int bY,bM,bD;
int cy;
cout << "What year is it? ";
cin >> cy;
test.setCyear(cy);
cout << "Thank you... " << endl;
cout << "First name: ";
cin >> fN;
test.setFirstName(fN);
cout << "Last Name: ";
cin >> lN;
test.setLastName(lN);
cout << "Birth Year: ";
cin >> bY;
test.setYear(bY);
cout << "Birth Month: ";
cin >> bM;
test.setMonth(bM);
cout << "Birth Day: ";
cin >> bD;
test.setDay(bD);

cout << "Max hear rate: " << test.getMaxHeartRate() << endl;
cout << "Target heart rate: " << test.getTargetHeartRate() << endl;

return 0;
}
