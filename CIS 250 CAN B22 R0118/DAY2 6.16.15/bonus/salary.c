#include <stdio.h>
#include <stdlib.h>
int main (void) {
char buf[128];
int salary, sal2, retropay, newsal, newmsal;
printf("Salary: ");
if (fgets(buf, sizeof(buf), stdin) != NULL) {
	salary = atoi(buf);;
}
sal2 = salary /2.0;
retropay = sal2 * 0.076;
newsal = salary * 1.076;
newmsal = newsal / 12;
printf("Retropay: %d \n",retropay);  
printf("New Salary: %d \n",newsal);
printf("New Monthly: %d \n",newmsal);
return(0);
}
