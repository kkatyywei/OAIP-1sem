#include <iostream>
#include <cmath>

void main()
{
	//вариант 15//
	double y, r, a = 4.5, b = 4.5 * pow(10, -4), e = 2.718281828459045;
	y = a * exp(-2 * b) - sqrt(1 + a);
	r = log(1 + 20 * b) / (1 + a);
	std::cout << "y=" << y<< std::endl;
	std::cout << "r=" << r;
}