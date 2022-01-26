#include <iostream>
#include <string>
#include <stack>
using namespace std;

int t;
string sentence;
stack<char> wordST;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t; cin.ignore();
	for (int k = 0; k < t; k++) {
		getline(cin, sentence);
		sentence += ' ';
		for (int z = 0; z < sentence.size(); z++) {
			if (sentence[z] == ' ') {
				while (!wordST.empty()) {
					cout << wordST.top();
					wordST.pop();
				} cout << ' ';
			} else wordST.push(sentence[z]);
		} cout << '\n';
	} return 0;
}