#include <iostream>
#include <cmath>
#include <vector>
#define MAX 2000000
using namespace std;

int n, tf;
long long a, b;
bool primeNum[MAX+1];
vector<long long> v;

bool isPrime(long long a) {
	for(int k=0; k < v.size() && v[k] * v[k] <= a; k++)
		if(a % v[k] == 0) return false;
	return true;
}

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	
	for (int k=2; k <= MAX; k++)
		if(!primeNum[k])
			for(int z=k*2; z <= MAX; z+=k)
				primeNum[z] = true;
	
	for (int k=2; k <= MAX; k++)
			if(!primeNum[k])
				v.push_back(k);
	
	while(n--) {
		cin >> a >> b;
		a += b;
		
		if(a < 4) cout << "NO\n";
		else if(a&1) {
			if(isPrime(a-=2)) cout << "YES\n";
			else cout << "NO\n";
		} else cout << "YES\n";
	} return 0;
}