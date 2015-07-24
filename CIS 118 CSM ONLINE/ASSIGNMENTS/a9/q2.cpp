#include <iostream>
using namespace std;
int main (void) {
bool a,b,c = 0;
for (int i = 0; i <= 7; i++) {
cout << "\nA: ";
cin >> a;
cout <<"B: ";
cin >> b;
cout <<"C: ";
cin >> c;
if ((a or b) and c) {
cout << a <<" "<<b<<" "<<c<<" ";
if (a) {
cout <<"true ";
} else { 
cout <<"false ";
} 
if (b) {
cout <<"true ";
} else { 
cout <<"false ";
}
if (c) {
cout <<"true";
} else { 
cout <<"false ";
}
}
}
}
