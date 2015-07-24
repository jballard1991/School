#include <iostream>
using namespace std;
int main (void) {
float weight, ton, boxes;
ton = 3527392.0;
cout << "Input the weight: ";
cin >> weight;
cout << endl;
cout << "Weight of box in tonnes: " << weight / ton << endl;
cout << "Number of boxes to make a tonne: " << ton / weight << endl;
return 0;
}
