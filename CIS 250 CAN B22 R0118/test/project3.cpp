#include "project3.h"
using namespace std;
pizza::pizza(int size,int toppings) {
	t = toppings;
	s = size;
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
void pizza::computePrice(void) {
	p = t*2+s;
}
void pizza::displayOutput(void) {
	cout << "Price is " << p << endl;
}
int main (void) {
int toppings,size;
pizza p(0,0);
cout <<"Size s/m/lg 1/2/3 :  ";
cin >> size;
cout <<"How many toppings?  ";
cin >> toppings;
p.setSize(size);
p.setToppings(toppings);
p.computePrice();
p.displayOutput();

return 0;
}
