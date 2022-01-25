#include <iostream>

using namespace std;

int T, studentNum, total, smartStudentNum;
int* score;
double avg, result;

int main(int argc, const char* argv[]) {
	cin.tie(NULL);

	cin >> T;

	for (int k = 0; k < T; k++) {
		cin >> studentNum;
		score = new int[studentNum];
		for (int z = 0; z < studentNum; z++) {
			cin >> score[z];
			total += score[z];
		} avg = (double)total / studentNum;
		for (int z = 0; z < studentNum; z++)
			if (score[z] > avg) smartStudentNum++;
		printf("%.3lf%\n", (double)smartStudentNum / studentNum * 100);
		total = smartStudentNum = 0;
	} return 0;
}