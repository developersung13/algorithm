#include <iostream>
#include <string>
using namespace std;

int lCnt, uCnt, nCnt, sCnt;
string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    while(getline(cin, str)) {
        for (int k=0; k < str.length(); k++) {
            if (str[k] >= 'a' && str[k] <= 'z') lCnt++;
            else if (str[k] >= 'A' && str[k] <= 'Z') uCnt++;
            else if (str[k] >= '0' && str[k] <= '9') nCnt++;
            else if (str[k] == ' ') sCnt++;
        } cout << lCnt << ' ' << uCnt << ' ' << nCnt << ' ' << sCnt << '\n';
        lCnt = uCnt = nCnt = sCnt = 0;
    } return 0;
}