#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, value;
vector<int> numVec;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int k = 0; k < n; k++) {
		cin >> value;
		numVec.push_back(value);
	} sort(numVec.begin(), numVec.end());

	for (int k = 0; k < n; k++) cout << numVec[k] << '\n';

	return 0;
}