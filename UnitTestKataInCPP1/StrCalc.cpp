#include "StrCalc.h"
#include <sstream>

StrCalc::StrCalc() { }

StrCalc::~StrCalc() { }


int StrCalc::add (std::string numbers) {

	if (numbers.empty()) {
		return 0;
	}
	int result;
	std::stringstream ss(numbers);
	ss >> result;

	return result;
}
