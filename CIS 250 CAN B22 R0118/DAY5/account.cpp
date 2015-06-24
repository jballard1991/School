#include <iostream>
#include "account.h" 
using namespace std;
Account::Account( string name , int bal ) {
	setAccountBalance( balance );
}
void Account::setAccountBalance( int bal ) {
	balance = bal;
}
int Account::getAccountBalance() {
	return balance; 
}
void Account::creditBalance( int credit ) {
	balance = balance + credit;	
}
void Account::debitBalance( int debit ) {
	balance = balance - debit;
}
 
void Account::displayInfo(){
	cout << "The Account Balance Is: " << getAccountBalance() << endl;
}

int main (void) {
Account ac("test", 0);
int bal,cred,deb;
cout << "Bal: ";
cin >> bal;
if (bal < 0) {
	cout << "Less than zero... " << endl;
	return 1;
}
ac.setAccountBalance(bal);
cout << "Credit: ";
cin >> cred;
ac.creditBalance(cred);
cout << "Debit: ";
cin >> deb;
ac.debitBalance(deb);
ac.displayInfo();

cout << "Account 2" << endl;

Account acb("testb", 0);
cout << "Bal: ";
cin >> bal;
if (bal < 0) {
        cout << "Less than zero... " << endl;
        return 1;
}
acb.setAccountBalance(bal);
cout << "Credit: ";
cin >> cred;
acb.creditBalance(cred);
cout << "Debit: ";
cin >> deb;
acb.debitBalance(deb);
acb.displayInfo();


return 0;
}
