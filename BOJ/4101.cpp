#include <iostream>
using namespace std;

int a, b;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	while(1) {
		cin >> a >> b;
		if(!a && !b) break;
		else if(a > b) cout << "Yes\n";
		else cout << "No\n";
	} return 0;
}