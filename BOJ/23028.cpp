#include <iostream>
using namespace std;

int complSem, majCre, totCre, needMajCre, needTotCre, maxSubj;
int creInfo[10][2];

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> complSem >> majCre >> totCre;

	if (130 - totCre > 0) needTotCre = 130 - totCre;
	if (66 - majCre > 0) needMajCre = 66 - majCre;

	for (int k = 0; k < 8 - complSem; k++) {
		cin >> creInfo[k][0] >> creInfo[k][1];
		for (int z = 0; z < creInfo[k][0]; z++) {
			needMajCre -= 3;
			needTotCre -= 3;
			maxSubj++;
		}

		for (int z = 0; z < creInfo[k][1]; z++) {
			if (maxSubj == 6) break;
			needTotCre -= 3;
			maxSubj++;
		} maxSubj = 0;
	}

	if (needTotCre <= 0 && needMajCre <= 0) cout << "Nice";
	else cout << "Nae ga wae";

	return 0;
}