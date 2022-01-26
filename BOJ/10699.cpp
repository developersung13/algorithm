#include <iostream>
#include <time.h>
using namespace std;

time_t timer;

int main(int argc, const char* argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    struct tm *t;
    timer = time(NULL);
    t = gmtime(&timer);
    cout << t->tm_year + 1900 << '-';
    cout << t->tm_mon + 1 << '-';
    cout << t->tm_mday;
    return 0;
}