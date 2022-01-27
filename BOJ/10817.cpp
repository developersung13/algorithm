#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int num;
vector<int> v;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	for(int k=0; k < 3; k++) {
		cin >> num;
		v.push_back(num);
	} stable_sort(v.begin(), v.end());
	cout << v[1];
	return 0;
}