#include <iostream>
#include <string>
#include <deque>
using namespace std;

int t;
bool error, reverseTF;
string command, eachNumStr, numStr, ans;
deque<int> numDQ;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> t;
	for (int k = 0; k < t; k++) {
		error = false;
		reverseTF = false;
		cin >> command >> eachNumStr >> numStr;
		
		for (int z = 1; numStr[z] != '\0'; z++) {
			eachNumStr = "";
			while (numStr[z] >= '0' && numStr[z] <= '9') {
				eachNumStr += numStr[z];
				z++;
			} if (eachNumStr != "") numDQ.push_back(stoi(eachNumStr));
		}

		for (int z = 0; z < command.size(); z++) {
			if (command[z] == 'R') reverseTF = !reverseTF;
			else {
				if (numDQ.empty()) { error = true; break; }
				if (reverseTF) numDQ.pop_back();
				else numDQ.pop_front();
			}
		}

		if (!error) {
			cout << '[';
			while (!numDQ.empty()) {
				if (reverseTF) {
					cout << numDQ.back();
					numDQ.pop_back();
				} else {
					cout << numDQ.front();
					numDQ.pop_front();
				} if(!numDQ.empty()) cout << ',';
			} cout << "]\n";
		} else cout << "error\n";
	} return 0;
}