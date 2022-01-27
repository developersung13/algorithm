#include <iostream>
using namespace std;

int num;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> num;
    cout << (int)(num * 0.78) << ' ' << (int)(num * 0.956);
    return 0;
}