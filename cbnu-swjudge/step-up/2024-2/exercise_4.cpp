#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person() {
        name = "None";
        age = 0;
        cout << name << " " << age << endl;
    }

    ~Person()
    {
        cout << name << " " << age << endl;
    }

    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
};

int main() {
    Person* personPtr = new Person();

    personPtr->setPerson("John", 25);
    cout << personPtr->getName() << " " << personPtr->getAge() << endl;

    delete personPtr;

    return 0;
}