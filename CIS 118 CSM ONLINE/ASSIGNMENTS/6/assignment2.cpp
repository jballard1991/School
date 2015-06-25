#include <iostream>
using namespace std;
int main (void) {
int height=0,feet=0,inches=0;
cout << "Height in inches: ";
cin >> height;
feet=height/12;
inches=height%12;
cout << "Result: " << feet << " feet " << inches << " inches\n";
return 0;
}
