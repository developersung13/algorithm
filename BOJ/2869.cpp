#include <iostream>
using namespace std;

int a, b, v;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b >> v;
	cout << (v - b - 1) / (a - b) + 1;
	return 0;
}