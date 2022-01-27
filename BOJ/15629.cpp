#include <iostream>
#include <string>
using namespace std;

int n, totCost;
string str;
bool SAexists, ZIexists, ZAexists;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for (int k=0; k < n; k++) {
        cin >> str;
        if (str == "ethiopia") totCost += 50;
        else if (str == "kenya") totCost += 50;
        else if (str == "namibia") {
            if(SAexists) totCost += 40;
            else totCost += 140;
        } else if (str == "south-africa") SAexists = true;
        else if (str == "tanzania") totCost += 50;
        else if (str == "zambia") {
            ZAexists = true;
            if(ZIexists) totCost += 20;
            else totCost += 50;
        } else if (str == "zimbabwe") {
            ZIexists = true;
            if(!ZAexists) totCost += 30;
        } if (!(str=="zambia") && !(str=="zimbabwe"))
            ZAexists = ZIexists = false;
    } cout << totCost;
    return 0;
}