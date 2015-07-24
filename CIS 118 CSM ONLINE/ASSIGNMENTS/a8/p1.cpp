//convert int to letter grade
#include <iostream>
using namespace std;
int main (void) {
	int grade = 0;
	cout << "Grade Integer N/100: ";
	cin >> grade;
	if (grade>=90) {
	cout << "A\n";
	return 0;
	} else if (grade>=80) {
	cout <<"B\n";
	return 0;
	} else if (grade>=70) {
        cout <<"C\n";
	return 0;
        } else if (grade>=60) {
        cout <<"D\n";
	return 0;
        } else {
        cout <<"F\n";
	return 0;
        }
}
