using namespace std;
class money {
public:
	int d,c;
	money(int,int);
	void setDols(int);
	void setCents(int);
	int getDols();
	int getCents();
	float getValue();
	
private:
	int dols,cent;
};
