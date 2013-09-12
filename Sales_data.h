#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>
#include <istream>
#include <ostream>

struct Sales_data {
	
friend Sales_data add(const Sales_data&, const Sales_data&);
friend std::ostream &print(std::ostream&, Sales_data&);
friend std::istream &read(std::istream&, Sales_data&);

public:
	Sales_data(const std::string &s)
		:bookNo(s), units_sold(0), revenue(0.0)
	{}
	Sales_data(const std::string &s, unsigned n, double p) 
		:bookNo(s), units_sold(n), revenue(p)
	{}
	Sales_data(std::istream & = std::cin);


	std::string isbn() const {return bookNo; }
	Sales_data& combine (const Sales_data&);
	inline double avg_price() const;

private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, Sales_data&);
std::istream &read(std::istream&, Sales_data&);
#endif