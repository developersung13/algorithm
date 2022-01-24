#include <iostream>
#include <string>
using namespace std;

int month, day, dateIdx;
int lastDay[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
string date[] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };


int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> month >> day;
    
    for (int k=1; k <= 12; k++)
        for (int z=1; z <= lastDay[k-1]; z++) {
            if (k == month && z == day) { cout << date[dateIdx]; return 0; }
            dateIdx = ++dateIdx % 7;
        }
    return 0;
}