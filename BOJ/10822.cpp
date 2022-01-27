#include <iostream>
#include <string>
using namespace std;

int total;
string numStr, eachNumStr;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> numStr;
	for (int k = 0; k < numStr.length() + 1; k++) {
		if (numStr[k] >= '0' && numStr[k] <= '9') {
			eachNumStr += numStr[k];
		} else {
			total += stoi(eachNumStr);
			eachNumStr = "";
		}
	} cout << total;
	return 0;
}