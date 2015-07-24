#include <iostream>
using namespace std;
int main (void) {
int num,tot = 0;
cout << "Number: ";
cin >> num;
for (int count = 1; count <= num; count++) {
	cout << "Square of " << count << " is: " << count * count << endl;
	tot += count * count; 
}
cout << "The total is: " << tot << endl;
return 0;
}
