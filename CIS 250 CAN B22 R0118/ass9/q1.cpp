#include <iostream>
using namespace std;
int main (void) {
int num,count,fac = 0;
cout << "Please input number: ";
cin >> num;
cout << "Factoral of " << num << " is: ";
fac = 1;
for (int count = 1;count <= num;count++) {
	fac = count * fac;
}
cout << fac << endl;
return 0;
} 
