#include <iostream>
using namespace std;

int n;
unsigned long long fiboArr[46] = { 0, 1, };

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	for(int k=2; k <= n; k++)
		fiboArr[k] = fiboArr[k-1] + fiboArr[k-2];
	
	cout << fiboArr[n];
	return 0;
}