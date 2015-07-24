#include <iostream>
using namespace std;
int main (void) {
cout << "Age: ";
int age = 0;
cin >> age;

if (age < 5) {
	cout << "Free!\n";
	return 0;
} else if (age >= 5 and age <= 12 ) {
	cout << "$10\n";
	return 0;
} else if (age > 12 and age < 26 ) {
	cout << "$18\n";
	return 0;
} else if (age > 60) {
	cout << "$15\n";
	return 0;
} else {
	cout << "$20\n";
	return 0;
}

return 1;
}


