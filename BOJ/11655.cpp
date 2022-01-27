#include <iostream>
#include <string>
using namespace std;

string str, ansStr;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    getline(cin, str);
    for (int k=0; k < str.length(); k++) {
        if (str[k] >= 'A' && str[k] <= 'Z' || str[k] >= 'a' && str[k] <= 'z') {
            if (str[k] >= 'N' && str[k] <= 'Z' || str[k] >= 'n' && str[k] <= 'z') ansStr += str[k] - 13;
            else ansStr += str[k] + 13;
        } else ansStr += str[k];
    } cout << ansStr;
    return 0;
}