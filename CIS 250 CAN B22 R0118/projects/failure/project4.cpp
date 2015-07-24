#include "project4.h"
using namespace std;
pizza::pizza() {
	t = 0;
	s = 1;
}
int pizza::getSize(void) {
	return size;
}
void pizza::setSize(int size) {
	switch (size) {
		case 1:
			s = 10;
			break;

		case 2:
			s = 14;
			break;
		case 3:
			s = 17;
			break;
	}	
}
int pizza::getToppings(void){
	return t;
}
void pizza::setToppings(int toppings) {
	t = toppings;
}
void pizza::chooseToppings(void) {
	for (int i = t; i > 0; i--) {
		cout << "Topping Type " << i << ": "<< endl;
		cin >> toppingType[i];
	}
}
void pizza::computePrice(void) {
	p = t*2+s;
}
void pizza::getToppingTypes(void) {
for (int i=0;i<=t;i++) {cout <<" " <<toppingType[i];
	cout << endl;}
}
void pizza::displayOutput(void) {
	cout << "Price is " << p << endl;
}
int main (void) {
int toppings,size;
int pNum = 1;
int orderState = 1;
string toppingSelection[5] = ("pepperoni","sausage","peppers","onion","mushroom","olive");
while (orderState) {
	pizza p[20];
	cout << "Pizza " << pNum << endl;
	cout <<"Size s/m/lg 1/2/3 :  ";
	cin >> size;
	p[pNum].setSize(size);
	cout <<"How many toppings?  ";
	cin >> toppings;
	p[pNum].setToppings(toppings);
	cout << "Toppings: pepperoni, sausage, peppers, onion, mushroom, olive" <<endl;
	p[pNum].chooseToppings();
	p[pNum].computePrice();
	cout << "Would you like another pizza? y/n: ";
	char quit;
	cin >> quit;
	if (quit == 'n') {
		orderState = 0;
		while (pNum > 0) {
		        cout << "Pizza " << pNum << " Toppings: ";
			p[pNum].getToppingTypes();
			p[pNum].displayOutput();
			pNum--;
		}
	} else {
		pNum++;
	}
}
return 0;
}
