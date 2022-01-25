#include <iostream>
#include <string>
using namespace std;

string scoreStr;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    cin >> scoreStr;
    if (scoreStr == "A+") cout << "4.3";
    else if (scoreStr == "A0") cout << "4.0";
    else if (scoreStr == "A-") cout << "3.7";
    else if (scoreStr == "B+") cout << "3.3";
    else if (scoreStr == "B0") cout << "3.0";
    else if (scoreStr == "B-") cout << "2.7";
    else if (scoreStr == "C+") cout << "2.3";
    else if (scoreStr == "C0") cout << "2.0";
    else if (scoreStr == "C-") cout << "1.7";
    else if (scoreStr == "D+") cout << "1.3";
    else if (scoreStr == "D0") cout << "1.0";
    else if (scoreStr == "D-") cout << "0.7";
    else cout << "0.0";
    return 0;
}