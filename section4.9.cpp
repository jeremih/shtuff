#include <iostream>
using std::cout; using std::string;using std::endl;

int size_of_everything(void) {
	cout<<sizeof(int)
		<<sizeof(char)
		<<sizeof(bool)
		<<sizeof(short)
		<<sizeof(char16_t)
		<<sizeof(long);
	return 0;
}

int exercise4_29(void) {
	int x[10]; int *p=x;
	cout<<sizeof(x)/sizeof(*x)<<endl;
	cout<<sizeof(p)/sizeof(*p)<<endl;
	return 0;
}