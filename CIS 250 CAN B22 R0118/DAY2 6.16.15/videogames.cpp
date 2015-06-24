#include <iostream>
using namespace std;
int main ()
{
int coupons, candy, gumballs, candyamount, gumballamount;
candy = 10;
gumballs = 3;
candyamount = 0;
gumballamount = 0;
cout << "Please input your tokens! ";
cin >> coupons;
cout << endl;
while (coupons >= candy) {
    coupons = coupons - candy;
    candyamount++;
}
while (coupons >= gumballs) {
    coupons = coupons - gumballs;
    gumballamount++;
}
cout << "Amount of candies: " << candyamount << endl;
cout << "Amount of gumballs: " << gumballamount << endl;
cout << "Amount of Coupons Remaining: " << coupons << endl;
return 0;
}
