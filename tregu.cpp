#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include "practice_functions.h"
#include "Sales_data.h"
#include "Message.h"
using std::cout; using std::cin; using std::endl;
using std::vector;
using std::string;

extern int Sales_data_report(vector <Sales_data> v);
bool compare_isbn(const Sales_data &first, const Sales_data &second);

int main() {

}

/*	int your_mom(int, int);																6-28-13
*	vector <decltype(your_mom) (*)> momvec;
*	momvec.push_back(greatest_commmon_factor);
*	auto p = momvec.begin();
*	cout << (*p) (15, 18);
*/

/*
*
*	vector<Sales_data> book_holder;
*	book_holder.push_back(Sales_data("000300"));
*	book_holder.push_back(Sales_data("4459"));
*	book_holder.push_back(Sales_data(":DDD"));
*	book_holder.push_back(Sales_data("meowwww"));
*
*	Sales_data_report(book_holder);
*/