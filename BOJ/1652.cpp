#include <iostream>
#include <string>
#define MAX 100
using namespace std;

int N, rowCnt, colCnt, cnt;
string pos[MAX];

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> N;
    for (int k=0; k < N; k++) cin >> pos[k];
    
    for (int r=0; r < N; r++) {
        for (int c=0; c < N; c++) {
            if (pos[r][c] == '.') cnt++;
            else if (pos[r][c] == 'X' && cnt >= 2) {
                rowCnt++;
                cnt = 0;
            } else cnt = 0;
        } if (cnt >= 2) rowCnt++; cnt = 0;
    }
    
    for (int c=0; c < N; c++) {
        for (int r=0; r < N; r++) {
            if (pos[r][c] == '.') cnt++;
            else if (pos[r][c] == 'X' && cnt >= 2) {
                colCnt++;
                cnt = 0;
            } else cnt = 0;
        }
        if (cnt >= 2) colCnt++; cnt = 0;
    } cout << rowCnt << ' ' << colCnt;
    return 0;
}