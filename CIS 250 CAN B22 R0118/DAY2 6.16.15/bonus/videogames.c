#include <stdio.h>
#include <stdlib.h>
int main (void) {
int coupons, candy, gumballs, candyamount, gumballamount;
char buf[128];
candy=10;
gumballs=3;
candyamount=0;
gumballamount=0;
printf("Number of coupons: ");
if (fgets(buf, sizeof(buf), stdin) != NULL) {
	coupons = atoi(buf);;
}  
while (coupons >= candy) {
	coupons = coupons - candy;
	candyamount++;
} 
while (coupons >= gumballs) {
	coupons = coupons - gumballs;
	gumballamount++;
}
printf("Amount of candies: %d \n",candyamount);
printf("Amount of gumballs: %d \n",gumballamount);
printf("Amount of Coupons Remaining: %d \n",coupons);
return(0);
}
