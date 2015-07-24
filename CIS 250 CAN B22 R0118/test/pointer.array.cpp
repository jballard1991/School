#include <iostream>
#include <cstdio>
using namespace std;
int main (void) {
	int array[] = {10,20,30};
	int (*ap)[3] = &array;
	int *ab = array;
	//ap = &array;
	cout << *ap << endl;
	for (int i = 0;i < 3; i++) {
		printf("%d , %d, %d\n",i,array[i],*ab);
		ab++;
	}
}
