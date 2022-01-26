#include <iostream>
#include <vector>
using namespace std;

int p, cnt;
int n[1000], m[1000];
vector<int> v;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> p;
	for(int k=0; k < p; k++) cin >> n[k] >> m[k];
	for(int k=0; k < p; k++) {
		cnt = 2;
		v.push_back(0); v.push_back(1); v.push_back(1);
		while(1) {
			v.push_back((v[cnt] + v[cnt-1]) % m[k]);
			if(v[cnt] == 0 && v[cnt-1] == 1) break;
			cnt++;
		} cout << k + 1 << ' ' << cnt << '\n';
		v.clear();
	} return 0;
}