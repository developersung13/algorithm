#include <iostream>
#include <stack>
#include <string>
using namespace std;
 
int n, value;
stack<int> st;
string command;
 
int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	cin >> n;
	for(int k=0; k < n; k++) {
		cin >> command;
		if(command == "push") {
			cin >> value;
			st.push(value);
		} else if(command == "pop") {
			if(st.empty()) cout << "-1\n";
			else { cout << st.top() << '\n'; st.pop(); }
		} else if(command == "size") {
			cout << st.size() << '\n';
		} else if(command == "empty") {
			cout << st.empty() << '\n';
		} else {
			if(st.empty()) cout << "-1\n";
			else cout << st.top() << '\n';
		} 
	} return 0;
}