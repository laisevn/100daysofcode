#include <iostream>

/**
*  IO - type safe
* Call by reference don't need to be simulated with pointers like in C
* 'inline' - informed the, compiler, that we should make this highly efficient.
* '&' - is call by reference. So this is to be read as reference to int. Not value of it, reference to it.
**/
inline void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

// Overloading. This is not ambiguous to compiler because we have signature matching
inline void swap(double& i, double& j)
{
	double temp = i;
	i = j;
	j = temp;
}

int main ()
{
	int m = 5, n = 10;
	double x = 5.3, y = 10.6;

	swap(m, n);
	std::cout << "Output: " << m << ", " << n  << std::endl;

	swap(x,y); //signature matching
	std::cout << "Output: " << x << ", "  << y << std::endl;

	return 0;
}