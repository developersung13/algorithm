#include <iostream>
#include <string>
using namespace std;

int cnt;
string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> str;
    for (int k=0; k < str.length(); k++) {
        if (str[k] == 'a') cnt++;
        else if (str[k] == 'e') cnt++;
        else if (str[k] == 'i') cnt++;
        else if (str[k] == 'o') cnt++;
        else if (str[k] == 'u') cnt++;
    } cout << cnt;
    return 0;
}