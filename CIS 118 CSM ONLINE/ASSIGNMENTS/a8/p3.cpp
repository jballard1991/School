#include <iostream>
using namespace std;
int main (void) {
cout <<"C or F ";
char type = 'a';
cin >> type;
if (type =='c') {
	cout <<"Temp in C: ";
	int temp = 0;
	cin >> temp;
	cout << "In F: " << temp *9/5 +32 << endl;
	return 0;
} else {
	cout <<"Temp in F: ";
	int temp = 0;
	cin >> temp;
	cout << "In C: " << (temp-32)*5/9 << endl;
	return 0;
}

return 1;
}

