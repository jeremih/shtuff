#include <iostream>
#include <string>
using std::cout; using std::cin; using std::string; using std::endl;

int how_many_vowelz(void) {
	string wordd;
	int vowel_count=0;

	while (getline(cin,wordd)) {
		for (char letterr:wordd) {
			if(letterr=='a'||letterr=='e'||letterr=='i'||letterr=='o'||letterr=='u')
				++vowel_count;
		}break;
	}
	cout<<vowel_count;
	return 0;
}

int how_many_vowelz2(void) {
	unsigned vowel_count=0;
	string wordd;
	getline(cin,wordd);
	for (char ch:wordd){
		switch (toupper(ch)) {
			case 'A': case 'E':	case 'I': case 'O': case 'U':
				++vowel_count;
		}
	}
	cout<<vowel_count;
	return 0;
}


int how_many_vowelz3(void) {
	string wordd;
	unsigned aCnt=0, eCnt=0, iCnt=0, oCnt=0, uCnt=0, spcCnt=0, tabCnt=0, fwhateverCnt=0;
	getline(cin,wordd);
	for (auto beg=wordd.begin(),end=wordd.end();beg!=end;++beg){
		char ch= *beg;
		switch (toupper(ch)) {
			case 'A': 
				++aCnt;
				break;
			case 'E':
				++eCnt;
				break;
			case 'I':
				++iCnt;
				break;
			case 'O':
				++oCnt;
				break;
			case 'U':
				++uCnt;
				break;
			case ' ':
				++spcCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			case 'F':
				switch(*(beg+1))
			case'f': case 'l': case 'i':
				++fwhateverCnt;
	}
		
	}

	cout<< "number of letter a's: "<<aCnt<<endl
	<<"number of letter e's: "<<eCnt<<endl
	<<"number of letter i's: "<<iCnt<<endl
	<<"number of letter o's: "<<oCnt<<endl
	<<"number of letter u's: "<<uCnt<<endl
	<<"number of spaces: "<<spcCnt<<endl
	<<"number of tabs: "<<tabCnt<<endl
	<<"number of two-letter f combos: "<<fwhateverCnt<<endl;
	return 0;
}