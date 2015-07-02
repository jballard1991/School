#include <iostream>
#include "q3.h"
using namespace std;
money::money(int d,int c) {
	dols = d;
	cent = c;	
}

void money:: setDols(int d) {
	dols = d;
}

void money::setCents(int c) {
	cent = c;
}

int money::getDols() {
	return dols;
}

int money::getCents() {
        return cent;
}

float money::getValue() {
float i = dols+cent/100.0;
return i;
}

int main (void) {
int d,c;
money test(0,0);
cin >> d;
cin >> c;
test.setDols(d);
test.setCents(c);

cout << test.getValue();

cout << endl ;

}
