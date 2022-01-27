#include <iostream>
#include <algorithm>
using namespace std;

int arrSize, *numArr;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> arrSize;
	numArr = new int[arrSize];
	
	for (int k = 0; k < arrSize; k++) cin >> numArr[k];
	sort(numArr, numArr + arrSize);
	for (int k = 0; k < arrSize; k++) cout << numArr[k] << '\n';
	return 0;
}