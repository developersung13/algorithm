#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int ans;
string hexStr, binaryStr;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> hexStr;
    for (int k=0; k < hexStr.length(); k++) {
        if (hexStr[k] == '0') binaryStr += "0000";
        else if (hexStr[k] == '1') binaryStr += "0001";
        else if (hexStr[k] == '2') binaryStr += "0010";
        else if (hexStr[k] == '3') binaryStr += "0011";
        else if (hexStr[k] == '4') binaryStr += "0100";
        else if (hexStr[k] == '5') binaryStr += "0101";
        else if (hexStr[k] == '6') binaryStr += "0110";
        else if (hexStr[k] == '7') binaryStr += "0111";
        else if (hexStr[k] == '8') binaryStr += "1000";
        else if (hexStr[k] == '9') binaryStr += "1001";
        else if (hexStr[k] == 'A') binaryStr += "1010";
        else if (hexStr[k] == 'B') binaryStr += "1011";
        else if (hexStr[k] == 'C') binaryStr += "1100";
        else if (hexStr[k] == 'D') binaryStr += "1101";
        else if (hexStr[k] == 'E') binaryStr += "1110";
        else binaryStr += "1111";
    } reverse(binaryStr.begin(), binaryStr.end());
    
    for (int k=0; k < binaryStr.length(); k++)
        if (binaryStr[k]-'0')
            ans += pow(2, k);
    cout << ans;
    return 0;
}