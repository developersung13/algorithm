#include <iostream>
using namespace std;

class Shape {
public:
	double result;
	int z;;
	double area(double x) {
		result = x * x; return result;
	}
	double area(double r, int y)
	{
		if (y == 1)
			result = 3.14 * r * r;
		return result;
	}
	double area(double x, double y)
	{
		result = x * y;
		return result;
	}
};

int main()
{
	Shape ob;

	printf("%.2lf\n", ob.area(3.0));
	printf("%.2lf\n", ob.area(3.0, true));
	printf("%.2lf\n", ob.area(2.5, 3.7));
}