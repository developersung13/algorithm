#include <iostream>
using namespace std;

class Account {
public:
	int money;
	Account() { money = 0; }
	Account(int x) { money = x; }
	int getDeposit()
	{
		return money;
	}
};

int main() {
	Account myAccount; // $0
	Account teamAccount(10000); // $10000
	cout << myAccount.getDeposit() << endl; cout << teamAccount.getDeposit() << endl;
}