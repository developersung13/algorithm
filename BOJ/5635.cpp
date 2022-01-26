#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;

struct studentInfo {
    string name;
    int day;
    int month;
    int year;
};

bool compare(const studentInfo& a, const studentInfo& b) {
    if (a.year != b.year) return a.year < b.year;
    else {
        if (a.month != b.month) return a.month < b.month;
        else return a.day < b.day;
    }
}

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    studentInfo *s = new studentInfo[n];
    
    for (int k=0; k < n; k++)
        cin >> s[k].name >> s[k].day >> s[k].month >> s[k].year;
        
    stable_sort(s, s + n, compare);
    cout << s[n-1].name + '\n' << s[0].name;
    return 0;
}