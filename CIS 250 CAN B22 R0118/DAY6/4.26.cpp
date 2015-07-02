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
int l = b.length();
l--;
//cout << "~~ " << l << endl;
for (int i = b.length(); i > 0; i--) {
        //cout <<" bcount: " << b[count] <<" blength: "<<l <<" which is "<<b[l]<<endl;
	if (b[count] == b[l]) {
	//cout << b[count] << " and " << b[l] << " match" << endl;
	} else { 
		cout << "No Match! " << endl;
		return 1;
	}       

count++;
l--;
	 
}
cout << a<<" is a palindrome! " << endl;

}

