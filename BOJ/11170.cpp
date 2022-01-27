#include <iostream>
#include <string>
using namespace std;

int n, a, b, ans;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int k = 0; k < n; k++) {
		ans = 0;
		cin >> a >> b;
		for (int z = a; z <= b; z++)
			for (int i = 0; i < to_string(z).size(); i++)
				if (to_string(z)[i] == '0') ans++;
		cout << ans << '\n';
	} return 0;
}