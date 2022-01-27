#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, M, c;
int *maxStudentNum;
string studentName;

struct Student {
	int c;
	string studentName;
} *s;

bool compare(const Student &s1, const Student &s2) {
	if (s1.c != s2.c) {
		return s1.c < s2.c;
	} else {
		if (s1.studentName.size() != s2.studentName.size()) {
			return s1.studentName.size() < s2.studentName.size();
		} else {
			return s1.studentName < s2.studentName;
		}
	}
}

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;
	maxStudentNum = new int[N];
	s = new Student[500];

	for (int k = 0; k < 500; k++) {
		cin >> c >> studentName;
		if (c == 0 && studentName[0] == '0') break;
		if (c > N) continue;
		if (maxStudentNum[c - 1] < M) {
			(s + k)->c = c;
			(s + k)->studentName = studentName;
			maxStudentNum[c - 1]++;
		}
	}

	sort(s, s + 500, compare);

	for (int k = 0; k < 500; k++) {
		if ((s + k)->c == 0) continue;
		if ((s + k)->c % 2 == 1)
			cout << (s + k)->c << ' ' << (s + k)->studentName << '\n';
	}

	for (int k = 0; k < 500; k++) {
		if ((s + k)->c == 0) continue;
		if ((s + k)->c % 2 == 0)
			cout << (s + k)->c << ' ' << (s + k)->studentName << '\n';
	} return 0;
}