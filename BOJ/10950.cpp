    #include <iostream>
using namespace std;

int n, a, b;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;

	for (int k = 0; k < n; k++) {
		cin >> a >> b;
		cout << a + b << '\n';
	} return 0;
}