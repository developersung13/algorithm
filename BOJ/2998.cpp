#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int k, octal;
string binaryStr, octalStr;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> binaryStr;
    reverse(binaryStr.begin(), binaryStr.end());
    for (k=1; k <= binaryStr.length(); k++) {
        if (binaryStr[k-1] - '0') octal += pow(2, (k-1) % 3);
        if (k % 3 == 0) {
            octalStr += to_string(octal);
            octal = 0;
        }
    } if ((k-1) % 3 != 0) octalStr += to_string(octal);
    reverse(octalStr.begin(), octalStr.end());
    cout << octalStr;
    return 0;
}