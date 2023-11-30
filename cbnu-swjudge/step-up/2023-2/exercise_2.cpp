#include <iostream>
using namespace std;

class Person {
	string name;
	int age;
public:
	void setName(string name) {
		this->name = name;
	}
	void setAge(int age) {
		this->age = age;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
};

int main() {
	Person person;
	person.setName("John");
	person.setAge(25);
	cout << person.getName() << endl;
	cout << person.getAge() << endl;
	return 0;
}