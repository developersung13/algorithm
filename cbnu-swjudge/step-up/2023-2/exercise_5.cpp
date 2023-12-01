#include <iostream>
using namespace std;

class Calculator {
public:
	int add(int a, int b, int c = 0) {
		return a + b + c;
	}

	double add(double a, double b) { // 3
		return a + b;
	}
};

int main() {
	Calculator calculator;

	cout << calculator.add(3, 4) << endl;
	cout << calculator.add(1, 2, 3) << endl;
	cout << calculator.add(2.5, 3.7) << endl;
}