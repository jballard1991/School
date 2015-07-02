#include <string>
#include <iostream>
using namespace std;

void getData(int& smallDiameter, double& priceSmall, int& largeDiameter, double& priceLarge) {
	cout << "The diameter of a small pizza has been set to: " << smallDiameter << endl;
	cout << "The price of a small pizza has been set to: " << priceSmall << endl;
	cout << "The diameter of a large pizza has been set to: " << largeDiameter << endl;
	cout << "The price of a large pizza has been set to: " << priceLarge << endl;
}


void giveResults(int smallDiameter, double priceSmall, int largeDiameter, double priceLarge) {
	cout << "Small Pizza: \n" << "Price: " << priceSmall << " Diameter: " << smallDiameter << " Price per Inch: " << smallDiameter / priceSmall << endl;
	cout << "Large Pizza: \n" << "Price: " << priceLarge << " Diameter: " << largeDiameter << " Price per Inch: " << largeDiameter / priceLarge << endl;
	if ( (smallDiameter / priceSmall) > (largeDiameter / priceLarge) ) { 
		cout << "Buy the smaller pizza! \n";
	} else { 
		cout << "Buy the larger pizza! \n";
	}

}

int main (void) {
int a,c = 0;
double b,d = 0;
cout << "Enter diameter of a small pizza (in inches): ";
cin >> a;
cout << "Enter the price of a small pizza: $ ";
cin >> b;
cout << "Enter diameter of a large pizza (in inches): ";
cin >> c;
cout << "Enter the price of a large  pizza: $ ";
cin >> d; 
getData(a,b,c,d);
giveResults(a,b,c,d);

return 0;
}
