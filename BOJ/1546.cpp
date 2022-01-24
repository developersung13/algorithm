#include <iostream>

using namespace std;

int T;
double total, maxNum = -1;
double* score;

int main(int argc, const char* argv[]) {
	cin.tie(NULL);

	cin >> T;
	score = new double[T];

	for (int k = 0; k < T; k++) {
		cin >> score[k];
		if (maxNum < score[k]) maxNum = score[k];
	}

	for (int k = 0; k < T; k++) {
		score[k] = score[k] / maxNum * 100;
		total += score[k];
	} printf("%lf", total / T);
	return 0;
}