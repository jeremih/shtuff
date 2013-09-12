#include <iostream>
#include <vector>
#include <stdexcept>
using std::vector;
using std::cin;  using std::cout; using std::endl;
using std::invalid_argument;

bool prefix_or_not(vector<int> one, vector<int> two) {
	bool first_try=true;
	vector<int> three, four;
	auto iter1 = one.begin(), iter2 = two.begin();
try {
	if (iter1 == one.end() || iter2 == two.end()) {
		throw invalid_argument("invalid input-empty vector");
	}
} catch (invalid_argument x) {
	int new_vec;
	cout<<"please enter new vector values, ended with a 69."<<endl<<"vector one:";
	while(cin>>new_vec && new_vec!=69) {
		three.push_back(new_vec);
	}
	cout<<endl<<"vector two:";
	while(cin>>new_vec && new_vec!=69) {
		four.push_back(new_vec);
	}
	iter1 = three.begin(),iter2=four.begin();
	first_try=false;
}
	for (; *iter1 == *iter2; ++iter1, ++iter2) {
		if (first_try){
			if (iter1+1==one.end()) {
				cout<<"vector one is a prefix of vector 2";
				return true;
			}
			if (iter2+1==two.end()) {
				cout<<"vector two is a prefix of vector 1";
				return true;
			}
		} else {
			if (iter1+1==three.end()) {
				cout<<"vector one is a prefix of vector 2";
				return true;
			}
			if (iter2+1==four.end()) {
				cout<<"vector two is a prefix of vector 1";
				return true;
			}
		}
	}
	cout<<"neither vector is a prefix of the other";
	return false;
}