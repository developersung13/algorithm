#include <iostream>
using namespace std;

long long a, b;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b; cout << (a+b)*(a-b);
    return 0;
}