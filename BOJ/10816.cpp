#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int num, cNum;
vector<int> cardVec, ansVec;

int main(int argc, const char argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> cNum;
	for(int k=0; k < cNum; k++) {
		cin >> num;
		cardVec.push_back(num);
	} stable_sort(cardVec.begin(), cardVec.end());
	
	cin >> cNum;
	for(int k=0; k < cNum; k++) {
		cin >> num;
		if(binary_search(cardVec.begin(), cardVec.end(), num))
			cout << upper_bound(cardVec.begin(), cardVec.end(), num) - lower_bound(cardVec.begin(), cardVec.end(), num) << ' ';
		else cout << "0 ";
	} return 0;
}