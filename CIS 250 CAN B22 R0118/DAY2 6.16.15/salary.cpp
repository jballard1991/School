#include <iostream>
using namespace std;

int main (void) {
float salary, sal2, retropay, newsal, newmsal;
cout << "Salary: ";
cin >> salary;
cout << endl;
sal2 = salary /2.0;
retropay = sal2 * 0.076;
newsal = salary * 1.076;
newmsal = newsal / 12;
cout << "Retropay: " << retropay << endl;
cout << "New Salary: " << newsal << endl;
cout << "New Monthly: " << newmsal << endl;
return 0;
}
