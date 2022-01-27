#include <iostream>
#include <string>
using namespace std;

int total;
string str, numStr;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    while(getline(cin, str)) {
        for (int k=0; k < str.length(); k++) {
           if (str[k] != ',') numStr += str[k];
           else { total += stoi(numStr); numStr = ""; }
        }
    } cout << stoi(numStr) + total;
    return 0;
}