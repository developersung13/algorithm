#include <iostream>
#include <string>
using namespace std;

char op;
string a, b, ans;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> op >> b;
    if (op == '+') {
        if (a.length() < b.length()) {
            b[b.length()-a.length()] = '1';
            cout << b;
        } else if (a.length() > b.length()) {
            a[a.length()-b.length()] = '1';
            cout << a;
        } else {
            a[0] = '2';
            cout << a;
        }
    } else {
        for (int k=0; k < b.length()-1; k++) a += '0';
        cout << a;
    } return 0;
}