#include <iostream>
using namespace std;

void ProductAvg(int a, int b, int c, int& product, double& avg);
int main()
{
	int a, b, c;
	int product=0;
	double avg=0;
	cin >> a >> b >> c;
	ProductAvg(a, b, c, product, avg);
	cout << product << endl;
	printf("%.2lf\n", avg);
	return 0;

}
void ProductAvg(int a, int b, int c, int& product, double& avg)
{
	product = a * b * c;
	avg = (a + b + c) / (3.00);
	
}