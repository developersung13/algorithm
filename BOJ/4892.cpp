#include <iostream>
using namespace std;

int num, tmp, eo;

int main(int arvc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	for(int k=1;; k++) {
		eo = 0;
		cin >> num;
		if(!num) break;
		tmp = 3 * num;
		if(tmp&1) {
			tmp = (tmp+1) / 2;
			eo=1;
		} else {
			tmp /= 2;
		} tmp = tmp * 3 / 9;
		if(eo) {
			cout << k << ". odd " << tmp << '\n';
		} else {
			cout << k << ". even " << tmp << '\n';
		}
	} return 0;
}