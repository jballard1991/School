#include <iostream>
using namespace std;
int main (void) {
float weight,height;
cout << "Weight lbs: ";
cin >> weight;
cout << "Height inches: ";
cin >> height;
cout << "BMI: " << (weight * 703) / (height * height) << endl;
return 0;
}
