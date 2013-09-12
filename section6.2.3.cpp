#include <string>
using std::string;

bool capital_letters(const string &s) {
	for (auto iter = s.begin(); iter!=s.end(); ++iter) {
		if (isupper(*iter)) {
			return true;
		}
	}
	return false;
}

void make_lowercase(string &s) {
	for (auto iter = s.begin(); iter!=s.end(); ++iter) {
		*iter=tolower(*iter);
	}
}