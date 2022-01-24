#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int total;
string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> str;
    for (int k=0; k < str.length(); k++) {
        if (str[k] >= 'A' && str[k] <= 'Z') total += str[k] - 'A' + 1;    
        else total += str[k] - 'a' + 1;
    }
    
    for (int k=2; k <= sqrt(total); k++) {
        if (!(total % k)) {
            cout << "It is not a prime word.";
            return 0;
        }
    } cout << "It is a prime word.";
    return 0;
}