#include <iostream>
#include <deque>
#include <string>
using namespace std;
 
int n, value;
deque<int> deq;
string command;
 
int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	cin >> n;
	for(int k=0; k < n; k++) {
		cin >> command;
		if(command == "push_front") {
			cin >> value;
			deq.push_front(value);
		} else if(command == "push_back") {
			cin >> value;
			deq.push_back(value);
		} else if(command == "pop_front") {
			if(deq.empty()) cout << "-1\n";
			else { cout << deq.front() << '\n'; deq.pop_front(); }
		} else if(command == "pop_back") {
			if(deq.empty()) cout << "-1\n";
			else { cout << deq.back() << '\n'; deq.pop_back(); } 
		} else if(command == "size") {
			cout << deq.size() << '\n';
		} else if(command == "empty") {
			cout << deq.empty() << '\n';
		} else if(command == "front") {
			if(deq.empty()) cout << "-1\n";
			else cout << deq.front() << '\n';
		} else {
			if(deq.empty()) cout << "-1\n";
			else cout << deq.back() << '\n';
		}
	} return 0;
}