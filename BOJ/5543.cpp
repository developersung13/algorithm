#include <iostream>
#include <algorithm>
using namespace std;

int a, b, price;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    a = b = 2000;
    
    for (int k=0; k < 3; k++) {
        cin >> price;
        a = price < a ? price : a;
    }
    
    for (int k=0; k < 3; k++) {
        cin >> price;
        b = price < b ? price : b;
    } cout << a + b - 50;
    return 0;
}