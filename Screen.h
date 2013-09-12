//#ifndef SCREEN_H
//#define SCREEN_H
//#include <string>
//#include <ostream>
////#include "Window_mgr.h"
//
//class Screen {
//
//
//public:
//	
//	friend void Window_mgr::clear(LENGTH);
//
//	typedef std::string::size_type dim;
//
//	Screen()
//		:cursor(0), height(0), width(0),contents("")
//	{}
//	Screen(dim ht, dim wd, dim blnk)
//		:cursor(0), height(ht), width(wd), contents(blnk, ' ')
//	{}
//	Screen(dim ht, dim wd, char& c)
//		:cursor(0), height(ht), width(wd), contents(ht * wd, c)
//	{}
//	
//	Screen& set_str(dim row, dim col, std::string& str);
//	char get() const
//	{ return contents[cursor];}
//	inline char get(dim row, dim col);
//	Screen &move (dim row, dim col);
//	Screen &set_char( dim row, dim col, char c);
//	Screen &set_char( char);
//	Screen &display(std::ostream &os)
//	{ do_display(os); return *this; }
//	const Screen &display(std::ostream &os) const
//	{do_display(os); return *this; }
//
//private:
//	void do_display(std::ostream &os) const
//	{ os << contents;}
//
//	dim cursor;
//	dim height, width;
//	std::string contents;
//};
//
//inline Screen &Screen::set_char( char c) 
//{
//	contents[cursor] = c;
//	return *this;
//}
//inline Screen &Screen::set_char( dim row, dim col, char c) {
//	contents[row * width + col] = c;
//	return *this;
//}
//
//inline Screen &Screen::move(dim row, dim col)
//{
//	cursor = row * width + col;
//	return *this;
//}
//
//char Screen::get(dim row, dim col) {
//	return contents[row * width + col];
//}
//
//#endif