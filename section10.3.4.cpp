#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::placeholders::_1;

extern bool check_size(const std::string &s, std::string::size_type sz);

std::vector<int>::iterator more_than_string_size(std::vector<int> &ivec, std::string s)
{
	auto find = bind(check_size, s, _1);
	auto there = std::find_if(ivec.begin(), ivec.end(), find);
	return there;
}