#include <iostream>
#include <string>
using namespace std;

string fullName;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> fullName;
	for (int k = 0; k < fullName.size(); k++)
		if (fullName[k] >= 'A' && fullName[k] <= 'Z')
			cout << fullName[k];
	return 0;
}