#include <string>
#include <sstream>
#include <iostream>
using namespace std;
int main (void) {
int a = 0;
int count = 0;
string b;
ostringstream convert;
cout << "Number: ";
cin >> a;
convert << a;
b = convert.str();
for (int i = b.length(); i > 0; i--) {
	cout << b[count] << "   " ;
	count++;
}
cout << endl;

}
