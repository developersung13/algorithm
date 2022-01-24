#include <iostream>
#include <algorithm>
#define NUM 9
using namespace std;

int sum;
int a[9];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	for(int k=0; k < NUM; k++) {
		cin >> a[k];
		sum += a[k];
	} stable_sort(a, a + NUM);
	
	for(int k=0; k < NUM; k++)
		for(int z=k+1; z < NUM; z++)
			if(sum - a[k] - a[z] == 100) {
				for(int i=0; i < NUM; i++) {
					if(k == i || z == i) continue;
					cout << a[i] << '\n';
				} return 0;
			}
}