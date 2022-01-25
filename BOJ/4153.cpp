#include <iostream>
using namespace std;

int a, b, c, maxNum;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while(1) {
		cin >> a >> b >> c;
		if (!(a+b+c)) break;

		if (a < b) {
			if (b < c) {
				if (a*a + b*b == c*c) cout << "right\n";
				else cout << "wrong\n";
			} else {
				if (a*a + c*c == b*b) cout << "right\n";
				else cout << "wrong\n";
			}
		} else {
			if (a < c) {
				if (a*a + b*b == c*c) cout << "right\n";
				else cout << "wrong\n";
			} else {
				if (b*b + c*c == a*a) cout << "right\n";
				else cout << "wrong\n";
			}
		}
	} return 0;
}