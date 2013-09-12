#include <istream>
#include <iostream>
#include <string>

using std::istream;

istream& read_stream(istream& in) {
	std::string temp;
	while (in >> temp  ) {
		std::cout << temp << ' ';
		if ( temp == std::string( "nope" ) ) {
			break;
		}
	}
	in.clear();
	return in;
}