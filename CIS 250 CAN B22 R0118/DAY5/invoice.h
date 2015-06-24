#include <string>
using namespace std;
class invoice {
public:
	invoice( string part, string desc, int quantity, int price); //constructor
	string getPartNumber();
	string getDesc();
	int getQuantity();
	int getPrice();
	void setPartNumber(string part);
	void setDesc(string desc);
	void setQuantity(int quantity);
	void setPrice(int price);
	int getInvoiceAmount();
private:
	int price,quantity;
	string part,desc;
};
