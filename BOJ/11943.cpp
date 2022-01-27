#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c, d, ans;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b >> c >> d;
    cout << min(a+d, b+c);
    return 0;
}