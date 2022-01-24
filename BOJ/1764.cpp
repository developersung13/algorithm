#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int a, b;
string name;
vector<string> v, ansVec;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b;

	v.resize(a);
	for (int k = 0; k < a; k++) cin >> v[k];
	stable_sort(v.begin(), v.end());

	for (int k = 0; k < b; k++) {
		cin >> name;
		if (binary_search(v.begin(), v.end(), name)) ansVec.push_back(name);
	} stable_sort(ansVec.begin(), ansVec.end());
	cout << ansVec.size() << '\n';
	for (int k = 0; k < ansVec.size(); k++) cout << ansVec[k] << '\n';
	return 0;
}