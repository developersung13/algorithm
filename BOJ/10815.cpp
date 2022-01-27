#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int value, n, n2;
vector<int> numVec;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	for (int k=0; k < n; k++) {
		cin >> value;
		numVec.push_back(value);
	} stable_sort(numVec.begin(), numVec.end());
	
	cin >> n2;
	for (int k=0; k < n2; k++) {
		cin >> value;
		if(binary_search(numVec.begin(), numVec.end(), value))
			cout << "1 ";
		else cout << "0 ";
	} return 0;
}