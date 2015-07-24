#include <iostream>
using namespace std;
int main (void) {
int size;
cout << "Size: ";
cin >> size;
if (size < 3){
cout << "Too small for grid..." << endl;
return 1;
}
for (int c= size; c>0; c--) {
	cout << "*";
}
cout << endl; 
	for (int b= size-2; b>0; b--) {
		cout << "*";
		for (int c= size-2; c>0; c--) {
		        cout << " ";
		}
	cout << "*" << endl;
}
for (int c= size; c>0; c--) {
        cout << "*";
}
cout << endl;

return 0;
}
