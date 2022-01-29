#include <iostream>
using namespace std;

int y, m, d, y2, m2, d2, age1, age2, age3;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> y >> m >> d;
    cin >> y2 >> m2 >> d2;
    
    age2 = y2 - y + 1; age3 = age2 - 1;
    
    if (y == y2) age1 = 0;
    else {
        if (m < m2) age1 = y2 - y;
        else if (m == m2) {
            if (d <= d2) age1 = y2 - y;
            else age1 = y2 - y - 1;
        } else age1 = y2 - y - 1;
    } cout << age1 << '\n' << age2 << '\n' << age3;
    return 0;
}