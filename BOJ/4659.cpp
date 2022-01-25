#include <iostream>
#include <string>
using namespace std;

int tf, vCnt, cCnt;
string str,
       vowel = "aeiou",
       consonant = "bcdfghjklmnpqrstvwxyz";

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    while(1) {
        cin >> str;
        if (str == "end") break;
        
        tf = vCnt = cCnt = 0;
        for (int k=0; k < str.length(); k++)
            if (vowel.find(str[k]) != string::npos) { 
                tf = 1;
                break;
            }
        
        if (tf)
            for (int k=0; k < str.length(); k++) {
                if (vowel.find(str[k]) != string::npos) {
                    vCnt++;
                    cCnt = 0;
                } else if (consonant.find(str[k]) != string::npos) {
                    cCnt++;
                    vCnt = 0;
                } if (vCnt == 3 || cCnt == 3) {
                    tf = 0;
                    break;
                }
            }
        
        if (tf)
            for (int k=1; k < str.length(); k++)
                if (str[k-1] == str[k]) {
                    if (str[k] == 'e' || str[k] == 'o') continue;
                    tf = 0;
                    break;
                }
        
        if (tf) cout << '<' << str << "> " << "is acceptable." << '\n';
        else cout << '<' << str << "> " << "is not acceptable." << '\n';
    } return 0;
}