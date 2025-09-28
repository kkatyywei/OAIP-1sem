#include <iostream>
#include <cmath>
void main()
{
	//вариант 12//
	double t, u, k = 6, r = 5 * pow(10, -7), x = 0.095, e = 2.718281828459045;
	t = tan(x) + r * (1 - log(x));
	u = t /( (x*x*x) + 1) / 1 - exp(k - 4);
	std::cout << "t=" << t << std::endl;
	std::cout << "u=" << u;

}
