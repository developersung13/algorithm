#include <iostream>
using namespace std;

int a, b;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b; 
    cout << b-a << ' ' << b;
    return 0;
}