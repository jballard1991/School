#include <iostream>
using namespace std;
int main (void) {
int num,factorial = 1;
cout << "Number: " ;
cin >> num ;
	for (int count = 1; count <= num; count++) {
		factorial=factorial*count;
	}
cout << "factorial is: " << factorial << endl;
}

