#ifndef EXERCISE_02_40_SALES_DATA_H
#define EXERCISE_02_40_SALES_DATA_H

#include <string>

struct Sales_data {
	std::string isbn;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

#endif    // EXERCISE_02_40_SALES_DATA_H
