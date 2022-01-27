#include <iostream>
#include <queue>
#include <string>
using namespace std;
 
int n, value;
queue<int> q;
string command;
 
int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	cin >> n;
	for(int k=0; k < n; k++) {
		cin >> command;
		if(command == "push") {
			cin >> value;
			q.push(value);
		} else if(command == "pop") {
			if(q.empty()) cout << "-1\n";
			else { cout << q.front() << '\n'; q.pop(); }
		} else if(command == "size") {
			cout << q.size() << '\n';
		} else if(command == "empty") {
			cout << q.empty() << '\n';
		} else if(command == "front") {
			if(q.empty()) cout << "-1\n";
			else cout << q.front() << '\n';
		} else {
			if(q.empty()) cout << "-1\n";
			else cout << q.back() << '\n';
		}
	} return 0;
}