#include <iostream>
using namespace std;
int main (void) {
bool broke,bfast,rush,waiting,yummy,easy;
cout <<"True False -> Broke? ";
cin >> broke;
cout <<"True False -> Did you eat brekfast? ";
cin >> bfast;
cout <<"True False -> Are you in a rush? ";
cin >> rush;
cout <<"True False -> Did you plan to eat? ";
cin >> waiting;
cout <<"True False -> Does it sound yummy? ";
cin >> yummy;
cout <<"True False -> Will it be easy? ";
cin >> easy;
if (easy ==  true  and yummy ==  true  and waiting ==  true  and rush ==  false  and bfast ==  false  and broke ==  false ) {
	cout <<"Yes, go Eat! \n";
	return 0;
} else {
	cout <<"No do not eat!\n";
	return 0;
}
}
