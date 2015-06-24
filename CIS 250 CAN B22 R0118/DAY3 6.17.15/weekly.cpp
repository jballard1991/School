#include <iostream>
#include <string>
using namespace std;
int main (void) {
float score,total;
int exs,exn;
exn = 1;
cout << "How many exercises to input: ";
cin >> exs;
for (exs < 0; exs--;) {
	cout << "Score received for exercise number " << exn << ": ";
	cin >> score;
	cout << "Total points possible for exercise number " << exn << ": ";
	cin >> total;
	cout << "Score received for exercise number" << exn << ": " << score / total << endl;
	exn++;
};
return 0;
}
