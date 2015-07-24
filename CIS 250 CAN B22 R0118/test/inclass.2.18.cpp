#include <iostream>
using namespace std;
int main (void) {
    int val1,val2;
    cout << "Input 2 numbers: ";
    cin >> val1;
    cout << endl;
    cin >> val2;
    cout << endl;
    if (val1 > val2) {
        cout << val1 << " Is greater than " << val2 <<  endl;
    }
    if (val1 < val2) {
        cout << val2 << " Is greater than " << val1 <<  endl;
    }
    else {
        cout << val1 << " Is equal to " << val2 << endl;
    }
}
