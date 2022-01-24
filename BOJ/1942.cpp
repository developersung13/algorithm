#include <iostream>
#include <string>
using namespace std;

int hour, minute, sec, hour2, minute2, sec2, timeValue, ans;
string sTmp, eTmp, sTime, eTime, zero[2];

int main(int arvc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int k = 0; k < 3; k++) {
		ans = 0;
		cin >> sTmp >> eTmp;
		sTime = sTmp.substr(0, 2); sTime += sTmp.substr(3, 2); sTime += sTmp.substr(6, 2);
		eTime = eTmp.substr(0, 2); eTime += eTmp.substr(3, 2); eTime += eTmp.substr(6, 2);
		sec = stoi(sTime.substr(4, 2)); minute = stoi(sTime.substr(2, 2)); hour = stoi(sTime.substr(0, 2));
		sec2 = stoi(eTime.substr(4, 2)); minute2 = stoi(eTime.substr(2, 2)); hour2 = stoi(eTime.substr(0, 2));
		while (1) {
			zero[0] = zero[1] = "";
			if (minute >= 0 && minute <= 9) zero[0] = "0";
			if (sec >= 0 && sec <= 9) zero[1] = "0";
			timeValue = stoi(to_string(hour) + zero[0] + to_string(minute) + zero[1] + to_string(sec));
			if (timeValue % 3 == 0) ans++;
			if (hour == hour2 && minute == minute2 && sec == sec2) {
				cout << ans << '\n';
				break;
			} sec++;
			if (sec == 60) { minute++; sec = 0; }
			if (minute == 60) { hour++; minute = 0; }
			if (hour == 24) hour = minute = sec = 0;
		}
	} return 0;
}