#include <iostream>
#include <string>
using namespace std;

string str;
int numOfDigit, total;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> numOfDigit;
	cin >> str;

	for (int k = 0; k < numOfDigit; k++) total += str[k] - '0';
	cout << total;
	return 0;
}