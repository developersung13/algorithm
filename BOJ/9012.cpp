#include <iostream>
#include <string>
using namespace std;

int t, cntPS;
string ps;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;

	for (int k = 0; k < t; k++) {
		cntPS = 0;
		cin >> ps;
		for (int z = 0; z < ps.size(); z++) {
			if (ps[z] == '(') cntPS++;
			else cntPS--;
			if (cntPS < 0) break;
		} if (!cntPS) cout << "YES\n";
		else cout << "NO\n";
	} return 0;
}