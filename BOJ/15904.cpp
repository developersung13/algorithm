#include <iostream>
#include <string>
using namespace std;

int canBe;
string str;

int main(int argc, const char* argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    getline(cin, str);
    for (int k=0; k < str.length(); k++) {
        if (str[k] == 'U') {
            if (!canBe) canBe++;
        } else if (str[k] == 'C') {
            if (canBe == 1) canBe++;
            else if (canBe == 3) { canBe++; break; }
        } else if (str[k] == 'P')
            if (canBe == 2) canBe++;
    } if (canBe == 4) cout << "I love UCPC";
    else cout << "I hate UCPC";
    return 0;
}