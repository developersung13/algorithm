#include <iostream>
using namespace std;

int a, b, c;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> a >> b >> c;
    if (a + b + c != 180) cout << "Error";
    else if (a == b && b == c) cout << "Equilateral";
    else if (a == b || b == c || c == a) cout << "Isosceles";
    else cout << "Scalene";
    return 0;
}