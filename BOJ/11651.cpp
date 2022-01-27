#include <iostream>
#include <algorithm>
using namespace std;

int n;

struct pos {
	int x;
	int y;
} *p;

bool compare(const struct pos &p1, const struct pos &p2) {
	if(p1.y != p2.y) {
		return p1.y < p2.y;
	} else {
		return p1.x < p2.x;
	}
}

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	p = new pos[n];
	
	for(int k=0; k < n; k++)
		cin >> p[k].x >> p[k].y;
		
	stable_sort(p, p + n, compare);
	
	for(int k=0; k < n; k++)
		cout << p[k].x << ' ' << p[k].y << '\n';
	return 0;
}