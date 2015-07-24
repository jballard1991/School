#include <iostream>
#include <string>
using namespace std;
int main (void) {
string letter,a,e,i,o,u;
a="a";
e="e";
i="i";
o="o";
u="u";
cout << "Letter: ";
cin >> letter;
if (letter == a or letter == e or letter == i or letter == o or letter == u) {
	cout << letter << " is a vowel" << endl;
	return 0;
} else {
	cout << letter << " is not a vowel" << endl;
	return 0;
}
}
