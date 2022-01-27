#include <iostream>

using namespace std;

int A, B;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> A >> B;
	cout << A + B << '\n';
	cout << A - B << '\n';
	cout << A * B << '\n';
	cout << A / B << '\n';
	cout << A % B;
	return 0;
}