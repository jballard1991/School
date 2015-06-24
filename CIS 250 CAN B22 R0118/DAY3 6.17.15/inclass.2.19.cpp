#include <iostream>
using namespace std;
int main (void) {
int val1, val2, val3, small, large;
cout << "Please input 3 values: ";
cin >> val1;
cout << " ";
cin >> val2;
cout << " " ;
cin >> val3;
cout << " " << endl;

if (val1 > val2 and val1 > val3) {
    large = val1;
}

if (val2 > val1 and val2 > val3) {
    large = val2;
}

if (val3 > val2 and val3 > val1) {
    large = val3;
}


if (val1 < val2 and val1 < val3) {
    small = val1;
}


if (val2 < val1 and val2 < val3) {
    large = val2;
}

if (val3 < val2 and val3 < val1) {
    small = val3;
}

cout << "Sum: " << val1 + val2 + val3 << endl;
cout << "Average: " << (val1 + val2 + val3) / 3 << endl;
cout << "Product: " << val1 * val2 * val3 << endl;
cout << "Smallest: " << small << endl;
cout << "Largest: " << large << endl;

}
