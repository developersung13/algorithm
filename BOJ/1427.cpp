#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string strNum;
int strLen, *numArr;

bool compare(int a, int b) { return a > b; }

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> strNum;
	strLen = strNum.size();
	numArr = new int[strLen];
	for (int k = 0; k < strLen; k++) numArr[k] = strNum[k] - '0';
	sort(numArr, numArr + strLen, compare);
	for (int k = 0; k < strLen; k++) cout << numArr[k];
	delete[] numArr;
	return 0;
}