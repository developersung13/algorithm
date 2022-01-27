#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;

struct memInfo {
	int age;
	string name;
} m[100000];

bool compare(const memInfo& m1, const memInfo& m2 ) {
	return m1.age < m2.age;
}

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	for (int k = 0; k < n; k++)
		cin >> m[k].age >> m[k].name;
	
	stable_sort(m, m + n, compare);

	for (int k = 0; k < n; k++)
		cout << m[k].age << ' ' << m[k].name << '\n';

	return 0;
}