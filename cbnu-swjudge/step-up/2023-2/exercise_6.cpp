#include <iostream>
using namespace std;

void SumDiff(int a, int b, int& sum, int& diff) {
	sum = a + b;
	diff = a - b;
}

int main() {
	int a, b;
	int sum, diff;
	cin >> a >> b;
	SumDiff(a, b, sum, diff);
	cout << sum << " " << diff << endl;
}