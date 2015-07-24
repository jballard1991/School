#include <iostream>
#include <string>
using namespace std;
class pizza {

public:
pizza();
int size, toppings;
void setSize(int size);
void setToppings(int toppings);
void chooseToppings(void);
int getSize(void);
int getToppings(void);
void getToppingTypes(void);
void displayOutput(void);
void computePrice(void);
private:
int t,s,p;
string toppingType[5];
};
