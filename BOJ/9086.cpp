#include <iostream>
#include <string>
using namespace std;

int T;
string str;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> T;
    for (int k=0; k < T; k++) {
        cin >> str;
        cout << str.front() << str.back() << '\n';
    } return 0;
}