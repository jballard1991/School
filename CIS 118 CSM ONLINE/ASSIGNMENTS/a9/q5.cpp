#include <iostream>
using namespace std;
int main (void) {
int day = 0;
bool clean,hw =0;
cout << "What day is it 1.sunday - 7.saturday: ";
cin >> day;
cout <<"Homework done 0/1: ";
cin >> hw;
cout <<"Room clean? 0/1: ";
cin >> clean;
switch (day) {
	case 1: //sunday or
		if (hw or clean) {
			cout <<"Go have fun!\n";
			break;
		} else {
			cout <<"No fun!\n";
			break;
		}
        case 2: //monday and
                if (hw and clean) {
                        cout <<"Go have fun!\n";
			break;
                } else {
                        cout <<"No fun!\n";
			break;
                }
        case 3: //tues and
                if (hw and clean) {
                        cout <<"Go have fun!\n";
			break;
                } else {
                        cout <<"No fun!\n";
			break;
                }
        case 4: //wed and
                if (hw and clean) {
                        cout <<"Go have fun!\n";
			break;
                } else {
                        cout <<"No fun!\n";
			break;
                }
        case 5: //thurs and
                if (hw and clean) {
                        cout <<"Go have fun!\n";
			break;
                } else {
                        cout <<"No fun!\n";
                	break;
		}
        case 6: //fri or
                if (hw or clean) {
                        cout <<"Go have fun!\n";
			break;
                } else {
                        cout <<"No fun!\n";
			break;
                }
        case 7: //sat or
                if (hw or clean) {
                        cout <<"Go have fun!\n";
			break;
                } else {
                        cout <<"No fun!\n";
			break;
                }
}

}
