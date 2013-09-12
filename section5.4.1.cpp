#include <iostream>
#include <string>
#include <vector>
#include <utility>
using std::cin;  using std::cout; using std::endl;
using std::string;
using std::vector;

int greatest_amount(vector<int> numbholder) {
	bool greatest = true;
	auto iter=numbholder.begin()+1;
	while(*iter&&iter!=numbholder.end()){
		if (*iter==(*(iter-1)))
			return 0;
	*iter=((*iter>*(iter-1))?*iter:*(iter-1));
	++iter;
	}
	return *(iter-1);
}
int repeat_counter(void) {
	string text;
	int x=0;
	vector<int> numbholder;
	vector<string> output_holder;
	vector<string> textholder;
	while( cin>>text && text!="stop" ) {
		textholder.push_back(text);
	}
	int list_size = textholder.size();
	for(list_size;list_size!=0;--list_size)
		numbholder.push_back(0);
	auto compare_to = textholder.begin();
	while(compare_to != textholder.end()-1) {
		output_holder.push_back(*compare_to);
		auto others=compare_to+1;
		if((*compare_to)==(*others)){
			++(*(numbholder.begin()+((compare_to - textholder.begin())-x)));
			++x;
		}
		++compare_to;
	}
	int greatest_amt= greatest_amount(numbholder);
	if (greatest_amt==0){
		cout<<"no single most repeated word";
		return 0;
	}
	int plus_this=0;
	for (auto iter=numbholder.begin();*iter!=greatest_amt;++iter) 
		plus_this=(*(iter+1));
	string final_result= *(textholder.begin()+plus_this);
	string times = " times";
	cout<<"the word repeated most is "+final_result
		<<endl<<"it was repeated "<<(greatest_amt+1)<< times;
	
	return 0;
}
