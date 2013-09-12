#include <vector>
#include <iostream>
#include <string>
using std::vector; using std::cin; using std::cout; using std::string;

vector<string> v1;
string wurd;
int shoot (void) {
	while (cin>> wurd) {
		if (wurd=="nope") {
		break;
		}
		v1.push_back(wurd);
	}
	for (string s:v1) {
		s[0]= toupper(s[0]);
		int iter=0;
		cout<<s<<" ";
		iter++;
		if (iter==8) {cout<<std::endl; iter=0;}
	}
	return 0;
}

vector<int> v2;
int numbb;
int sheet(void) {
	while (cin>>numbb) {
		if (numbb == 69){
			break;}
		v2.push_back(numbb);
	}
	for (decltype(v2.size()) siz=0; siz!= v2.size();siz++) {
		cout<<v2[siz] + v2[v2.size() - siz-1];
	}
return 0;}