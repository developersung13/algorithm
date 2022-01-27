#include <iostream>
#include <string>
#define MAX 100000
using namespace std;

string a, b;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b;
    for (int k=0; k < MAX; k++) {
        if (a[k]-'0' && b[k]-'0') cout << '1';
        else cout << '0';
    } cout << '\n';
    
    for (int k=0; k < MAX; k++) {
        if (a[k]-'0' || b[k]-'0') cout << '1';
        else cout << '0';
    } cout << '\n';
    
    for (int k=0; k < MAX; k++) {
        if (a[k]-'0' != b[k]-'0') cout << '1';
        else cout << '0';
    } cout << '\n';
    
    for (int k=0; k < MAX; k++)
        cout << !(a[k]-'0');
    cout << '\n';
    
    for (int k=0; k < MAX; k++)
        cout << !(b[k]-'0');
    
    return 0;
}