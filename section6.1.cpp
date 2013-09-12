#include <iostream>
using std::cin; using std::cout; using std::endl;

int fact(int i) {
	int val=1;
	for (;i!=1;i--) {
		val*=i;
	}
	return val;
}

int fact2(void) {
	int i;
	cout<<"enter a number, dude"<<endl;
	cin>>i;
	return fact(i);
}

int absolute_value(int i) {
	return abs(i);
}