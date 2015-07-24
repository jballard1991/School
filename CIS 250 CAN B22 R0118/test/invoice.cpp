#include <iostream>
#include <string>
#include "invoice.h"
using namespace std;

invoice::invoice(string pa, string de, int qu, int pr) {
	setPartNumber(pa);
        setDesc(de);
        setQuantity(qu);
        setPrice(pr);
} 
void invoice::setPartNumber(string pa) {
	part = pa;
}

void invoice::setDesc(string de) {
        desc = de;
}
void invoice::setQuantity(int qu) {
        quantity = qu;
}
void invoice::setPrice(int pr) {
        price = pr;
}

string invoice::getPartNumber() {
	return part;
}

int invoice::getPrice() {
        return price;
}

string invoice::getDesc() {
        return desc;
}

int invoice::getQuantity() {
        return quantity;
}

int invoice::getInvoiceAmount() {
	return  price * quantity;
}

int main (void) {
int pr,qu;
string de,pa;
pr = 0;
qu = 0;
cout << "Part Number: ";
cin >> pa;
cout << "Quantity: ";
cin >> qu;
cout << "Description: ";
cin >> de;
cout << "Price: ";
cin >> pr;

invoice in("","",1,1);
in.setPrice(pr);
in.setQuantity(qu);
in.setDesc(de);
in.setPartNumber(pa);


cout << "Invoice: " << in.getQuantity() << " of " << in.getPartNumber() << " at " << in.getPrice() << " will be " << in.getInvoiceAmount() << endl;

return 0;
}
