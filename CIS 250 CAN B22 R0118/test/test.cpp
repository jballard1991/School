#include <iostream>
#include <string>
using namespace std;
int main (void) {
char input; 
bool is = false;
cout << "Please input character: ";
cin >> input;
switch (input) {
	case 'a':
		is = true;
		break;
	case 'e':
		is = true;
		break;
        case 'i':
                is = true;
                break;
        case 'o':
                is = true;
                break;
        case 'u':
                is = true;
                break;

}
if (is == true) { 
	cout << "Is a vowel! " << endl;
} else { 
	cout << "Not a vowel! " << endl;
}
return 0;
}
