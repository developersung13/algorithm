#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, value;
vector<int> numVec;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	for(int k=0; k < n; k++) {
		cin >> value;
		numVec.push_back(value);
	} stable_sort(numVec.begin(), numVec.end());
	numVec.erase(unique(numVec.begin(), numVec.end()), numVec.end());
	for(int k=0; k < numVec.size(); k++) cout << numVec[k] << ' ';
	return 0;
}