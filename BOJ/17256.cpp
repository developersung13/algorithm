#include <iostream>
using namespace std;

int ax, ay, az,
    cx, cy, cz;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> ax >> ay >> az >> cx >> cy >> cz;
    cout << cx-az << ' ' << cy/ay << ' ' << cz-ax;
    return 0;
}