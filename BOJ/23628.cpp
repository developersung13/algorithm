#include <iostream>
using namespace std;

int y1, y2, m1, m2, d1, d2, sD, eD, A, N = 1;
int yR, mR, totD;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
	sD = y1 * 360 + m1 * 30 + d1;
	eD = y2 * 360 + m2 * 30 + d2;
	while (sD != eD) {
		if (++totD % 30 == 0 && totD <= 1080) mR++;
		if (totD % 360 == 0) {
			if (2 * N + 1 == totD / 360) { A++; N++; }
			yR += A + 15;
		} sD++;
	} cout << yR << ' ' << mR << '\n' << totD << "days";
	return 0;
}