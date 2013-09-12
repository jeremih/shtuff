#include <iostream>
#include <cstddef>
using std::cout; using std::cin;

int twodimensional(int i) {
	const int rows=4,columns=5;
	int ia[rows][columns]={
		{1, 1, 3, 5, 8},
		{100, 100, 98, 96, 93},
		{11, 22, 33, 44, 55},
		{123, 234, 345, 456, 567}
	};
	if (i==1) {
		for (int (&rrow)[5]:ia) {
			for (int &rcol:rrow){
				cout<<rcol<<" ";
			}
		}
	}else if (i==2) {
		for (size_t x=0;x!=rows;++x) {
			for (size_t y=0;y!=columns;++y){
				cout<<ia[x][y]<<" ";
			}
		}
	}else if (i==3) {
		for (int (*prows)[5]=ia;prows!=ia+rows;++prows) {
			for(int *pcolumns=*prows;pcolumns!=*prows+columns;++pcolumns){
				cout<<*pcolumns<<" ";
			}
		}
	}else {cout<<"nope.avi";}
	return 0;
}

/**
*          FUCK YES FIRST TRY BITCHES
*/