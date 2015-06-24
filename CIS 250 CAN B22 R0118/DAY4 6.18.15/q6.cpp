#include <iostream>
using namespace std;
int main (void) {
char * letters = "aeiouAEIOU";  // create character array
int ich = 0;	// initialize integer ich for casting of chars
for (char * ptr = letters; *ptr != 0; ++ptr) {	// for loop to increment through char array using ptr
	char ch = *ptr; 
	ich = ch;	// cast from char to int
	cout << ch << " = " << ich << endl;
}

}
