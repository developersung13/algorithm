#include <iostream>
#include <string>
using namespace std;

string str;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while (getline(cin, str)) cout << str << '\n';
	return 0;
}