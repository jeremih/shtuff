#include <vector>
#include <iostream>
#include <string>
using std::vector; using std::cin; using std::cout; using std::string;

int sh33t(void) {
	vector<int> v2;
	int numbbb;
	while (cin>>numbbb) {
		/*if (numbbb == 69){
			break;}*/
		v2.push_back(numbbb);
	}
	auto beg = v2.cbegin(), end = (v2.cend());
	for (decltype(v2.size()) siz=0; siz!= v2.size();siz++) {
		cout<<*(beg++) + *(--end)<<" ";
	}
return 0;}

int grade_cluster(void) {
	vector<unsigned> scores(11,0);
	unsigned grade;
	while (cin>>grade) {
		if (grade<100) {
			auto beg = scores.begin();
			*(beg+(grade/10))+=1;
			cout<<*(beg+(grade/10));
		}
	}return 0;
}