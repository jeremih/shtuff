#include <vector>
#include <iostream>
#include <string>
using std::vector; using std::cin; using std::cout; using std::string;


int goodness_sake(void) {
	vector<int> v1;
	for (int x=1; x!= 11;x++) {
		v1.push_back(x*x);}
	for(auto it=v1.cbegin();it!=v1.cend();it++) {
		cout<<(*it * 2)<<" ";}
	//for (int z=0;z!=10;z++) {
	//	cout<<v1[z]<<" ";}
	return 0;
}