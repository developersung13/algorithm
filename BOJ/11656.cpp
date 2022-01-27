#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int strSize;
string str, strArr[1000];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> str; strSize = str.size();
	for(int k=0; k < strSize; k++) {
		strArr[k] = str; str.erase(0, 1);
	} stable_sort(strArr, strArr+strSize);
	
	for(int k=0; k < strSize; k++) cout << strArr[k] + '\n';
	return 0;
}