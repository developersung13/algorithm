#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string num1, num2;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> num1 >> num2;

	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());
	cout << max(stoi(num1), stoi(num2));
	return 0;
}