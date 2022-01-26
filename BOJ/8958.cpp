#include <iostream>
#include <string>

using namespace std;

int T, A, B, score, tempScore;
string str;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> T; cin.ignore();

	for (int k = 0; k < T; k++) {
		getline(cin, str);
		for (int z = 0; z < str.length(); z++) {
			if (str[z] == 'O') tempScore++;
			else tempScore = 0;
			score += tempScore;
		} cout << score << '\n';
		score = tempScore = 0;
	} return 0;
}