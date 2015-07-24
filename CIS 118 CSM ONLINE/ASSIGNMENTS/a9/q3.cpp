#include <iostream>
using namespace std;
int main (void) {
int age,feet =0;
cout <<"Age: ";
cin >> age;
cout <<"Height in feet: ";
cin >> feet;
if (age >= 18 and feet == 6) {
	cout <<"Condition A met\n";
} if (age < 66 or feet < 6) {
	cout <<"Condition B met\n";
} if (feet == 6 or (age >= 18 and age <= 65)) {
	cout <<"Condition C met\n";
} if (age != 0) {
	cout << "Condition D met\n";
} if (age == 18 or age == 29 or age == 37) {
	cout <<"Condition E met\n";
}
}
