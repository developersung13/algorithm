#include <iostream>

using namespace std;

int a, b;
int multiplyArr[3];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b;

	multiplyArr[0] = a * (b % 10);
	multiplyArr[1] = a * (b / 10 % 10);
	multiplyArr[2] = a * (b / 100);
	
	for (int k = 0; k < sizeof(multiplyArr) / sizeof(multiplyArr[0]); k++)
		cout << multiplyArr[k] << '\n';
	cout << a * b;
	return 0;
}