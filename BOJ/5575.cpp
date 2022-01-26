#include <iostream>
using namespace std;

int sH, sM, sS, eH, eM, eS, ansH, ansM, ansS;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    for (int k=0; k < 3; k++) {
        ansH = ansM = ansS = 0;
        cin >> sH >> sM >> sS >> eH >> eM >> eS;
        while(sH != eH || sM != eM || sS != eS) {
            sS++; ansS++;
            if (sS == 60) { sM++; sS = 0; }
            if (ansS == 60) { ansM++; ansS = 0; }
            if (sM == 60) { sH++; sM = 0; }
            if (ansM == 60) { ansH++; ansM = 0; }
            if (sH == 24) sH = 0;
            if (ansH == 24) ansH = 0;
        } cout << ansH << ' ' << ansM << ' ' << ansS << '\n';
    } return 0;
}