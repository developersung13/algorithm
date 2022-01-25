#include <iostream>
using namespace std;

int w, a, b;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> w;
	a = w / 5;
	while (1) {
		if (a < 0) { cout << -1; return 0; }
		if ((w - 5 * a) % 3 == 0) { b = (w - 5 * a) / 3; break; }
		a--;
	} cout << a + b;
	return 0;
}