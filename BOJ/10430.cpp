#include <iostream>

using namespace std;

int A, B, C;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> A >> B >> C;

	cout << (A+B)%C << '\n' << ((A%C)+(B%C))%C << '\n' << (A*B)%C << '\n' << ((A%C)*(B%C))%C;
	return 0;
}