#include <string>
using namespace std;
class Account {
public:
	Account( string , int ); //constructor
	int getAccountBalance();
	void setAccountBalance( int );
	void displayInfo();	
	void creditBalance(int);
	void debitBalance(int);
private:
	int balance;
	int credit;
	int debit;
	string name;
};
