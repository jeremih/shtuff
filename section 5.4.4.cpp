#include <iostream>
#include <string>
using std::cin; using std::cout;
using std::string;

int greater_string() {
	string rsp;
	do {
		string s1, s2;
		cout<<"please type 2 words ";
		cin>>s1>>s2;
		if (s1>s2) {
			cout<<s1<<" is greater than "<<s2<<'\n';
		}else if (s1<s2) {
			cout<<s2<<" is greater than "<<s1<<'\n';
		}else {
			cout<<"neither word is greater"<<'\n';
		}
		cout<<"again? respond yes or no ";
		cin>>rsp;
		cout<<'\n';
	}
	while(!(rsp.empty()) && rsp[0] != 'n');
	return 0;
}