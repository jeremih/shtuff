#include <vector>
#include <iostream>
#include <string>
#include <cstring>
using std::vector; using std::cin; using std::cout; using std::string;

int c_string_compare(void) {
	const char ca1[] = "slerp", ca2[] = "zerp";
		const char *cp1 = ca1, *cp2 = ca2;
		while (*cp1==*cp2){
			++cp1, ++cp2;
		}
		if (*cp1>*cp2) {
			cp1=ca1;
			while(*cp1){
			cout<<*cp1;
			cp1++;}
		}
		else if (*cp1<*cp2) {
			cp1=ca2;
			while(*cp1){
			cout<<*cp1;
			cp1++;}
		}
	return 0;
	}

int string_compare(void) {
	string s1("nope.avi"), s2("heck yeas");
	auto iter1 = s1.begin(), iter2 = s2.begin();
	bool bigger;
	while (*iter1==*iter2) 
		++iter1, ++iter2;
	if (*iter1>*iter2) 
		bigger=true;
	else
		bigger=false;
	if (bigger) 
		cout<<s1;
	else
		cout<<s2;

	return 0;
}

int string_catz(void) {
	char lolcats[] = "meooww", nyancats[] = "nyann";
	strcat_s(lolcats, 12, nyancats);
	char bunch_o_catz[13];
	strcpy_s(bunch_o_catz,13, lolcats);
	cout<<bunch_o_catz;
	return 0;
}