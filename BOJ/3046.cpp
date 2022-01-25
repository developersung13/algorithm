#include <iostream>
using namespace std;

int a;
float s;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> a >> s;
	cout << 2 * s - a;
	return 0;
}