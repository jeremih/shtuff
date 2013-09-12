#include <iostream>
#include <stdexcept>
using std::cin; using std::cout; using std::endl;
using std::domain_error;

int divide_two_ints() {
	double d1, d2;
	cout<<"enter two numbers"<<endl;
	cin>>d1>>d2;
	while(true) {
		try {
			if(!d2) {
				throw domain_error("you cannot divide by zero. input a different number");
			}
		cout<<(d1/d2)<<endl;
		break;
		}
		catch(domain_error e) {
			cout<<e.what()<<endl;
			cin>>d2;
		}
	}
	return 0;
}