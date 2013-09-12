#include "Sales_data.h"
#include <vector>
#include <iostream>
#include <fstream>
using std::cout; using std::endl;
using std::vector;
int Sales_data_report(vector <Sales_data> v) {
	//VECTOR MUST BE SORTED BY BookNo
	std::fstream out;
	if (v.empty())
		return -1;	
	auto total = v.begin();
	while (total != v.end()) {
		for (auto trans = total + 1; trans != v.end();++trans) {
			if (total->isbn() == trans->isbn() ) {
				total->combine(*trans);
			}
		}	
		print(cout, *total);
		cout << endl;
		out.open("C:\\Users\\winnersjay\\Documents\\Coding\\Sales_data_report.txt", std::fstream::app);
		print ( out, *total);
		out << '\n';
		out.close();
		++total;
		if (total!= v.end())
		while((total-1)->isbn() == total->isbn()) {
			++total;
		}
	}
	return 0;
}