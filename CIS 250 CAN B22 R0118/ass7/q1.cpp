#include <iostream>

using namespace std;

void figureMeOut( int& x, int y, int& z);

int main() 

{

    int a, b, c;

    a = 10;

    b = 20;

    c = 30;

    figureMeOut(a, b, c);

     cout << a << "   " << b << "   " << c << endl;

     return 0;

}

void figureMeOut(int& x, int y, int& z)

{

     cout  << x << " " << y << " " <<  z << endl;

     x = 1;

     y = 2;

     z = 3;

     cout  << x << " " << y << " " <<  z << endl;

}
