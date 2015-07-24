#include <iostream>
using namespace std;
int main (void) {
float radius, dia, cir, area;
cout << "Radius: ";
cin >> radius;
cout << "Circumference: " << 2 * 3.14159 * radius << endl;
cout << "Diameter: " << radius * 2 << endl;
cout << "Area: " << 3.14159 * (radius * radius ) << endl;
return 0;
}
