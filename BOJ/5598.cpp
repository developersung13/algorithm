#include <iostream>
#include <string>
using namespace std;

string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> str;
    for (int k=0; k < str.length(); k++) {
        if (str[k] <= 'C') str[k] += 23;
        else str[k] -= 3;
    } cout << str;
    return 0;
}