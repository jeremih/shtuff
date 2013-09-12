#include <iostream>
#include <string>
#include <utility>
#include <vector>
using std::vector;
using std::cin;  using std::cout; using std::endl;
using std::string;
using std::pair;

int find_uppercase_duplicates() {
	string buf;
	string pre_buf;
	int x=0;
	vector<int> how_many;
	typedef pair <string,int> final_results;
	vector <final_results> to_print1, to_print2;
	auto iter=how_many.begin();
	while (cin >> buf && !(buf=="stop")) {
		if (isupper(buf[0])) {
			if(buf==pre_buf) {
				++(*iter);
				final_results repeated(buf, *iter);  
				to_print1.push_back(repeated);
			} else {
				how_many.push_back(0);
				iter=how_many.end()-1;
			}
		
			pre_buf=buf;
		}
	}
	
//	final_results *g= new final_results();
// decided that a pointer wasn't needed here, so long as i use a standard for loop and use an iterator as a pointer instead
	for (auto iter = to_print1.begin(); iter != to_print1.end(); ++iter) {
		if ((iter+1 != to_print1.end()) && (iter+1)->first == iter->first) {
			continue;
		}
		to_print2.push_back(*iter);
	}
	for (final_results f:to_print2) {
		cout<<f.first<<" was repeated "<<f.second<<" time";
			if (f.second!=1){
				cout<<'s';
			}		
			cout<<endl;
	}
	return 0;
}