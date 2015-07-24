#include <iostream>
using namespace std;

int fib(int n) {
return n=n-1+n-2;
}

int main (void) {
int index = 0;
cout << "Print to index: ";
cin >> index;
index++;
for (int count = 2; count <= index; count++) {
	cout << fib(count) << endl;
}
return 0;
}
