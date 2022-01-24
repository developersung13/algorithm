#include <iostream>
#include <string>
using namespace std;

int maxIdx, alphabet[26];
string oneLine;

int main() {
	while (getline(cin, oneLine))
		for (int k = 0; k < oneLine.length(); k++)
			if (oneLine[k] >= 'a' && oneLine[k] <= 'z')
				alphabet[oneLine[k] - 'a']++;

	for (int k = 1; k < 26; k++)
		maxIdx = (alphabet[maxIdx] < alphabet[k]) ? k : maxIdx;

	for (int k = maxIdx; k < 26; k++) {
		if (alphabet[maxIdx] == alphabet[k])
			printf("%c", 'a' + k);
	} return 0;
}