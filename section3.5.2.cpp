#include <vector>
#include <iostream>
#include <string>
using std::vector; using std::cin; using std::cout; using std::string;

int array1(void) {
	int ten_ints[10];
	for (int iter = 0;iter<10;iter++) {
		ten_ints[iter]=iter;
		//cout<<ten_ints[iter]<<" "; 
	}
	int ten_more_ints[10];
	for (int i:ten_ints) {
		ten_more_ints[i]= i;
		cout<<ten_more_ints[i]<<" ";
	}

	return 0;
}