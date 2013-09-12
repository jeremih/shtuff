#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::cin;  using std::cout; using std::endl;
using std::string;

int repetition_tester() {
	string text;
	bool found=false;
	string prev_text="";
	int text_cnt=0;
	while (cin>>text&&text!="stop") {
		if (text==prev_text){
			++found;
			break;
		}
		prev_text=text;
	}
	
	if (found){
	cout<<"text repeated first was " + prev_text;
	}else {
		cout<<"no text was repeated";
	}
	return 0;
}