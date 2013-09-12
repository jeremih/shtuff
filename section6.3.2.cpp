#include <vector>
#include <iostream>
using std::vector;
using std::cout;

int &get (int *arry, int index) { 
	return arry[index];
}

void print_dat_vector(vector<int> v, int x) {
	cout << *(v.begin() + x) << ' ';
	++x;
	if ((v.begin() + x) != v.end()) {
	print_dat_vector(v, x);
	}
}