#include "Sales_data.h"

bool compare_isbn(const Sales_data &first, const Sales_data &second)
{
	return first.isbn() < second.isbn();
}