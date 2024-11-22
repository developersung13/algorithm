#include <iostream>
using namespace std;

class Animal {
public:
    virtual void Speak() const {
        cout << "Animal!" << endl;
    }
};

class Dog :public Animal {
public:
    virtual void Speak() const {
        cout << "Woof!" << endl;
    }
};
class Cat : public Animal {
public:
    virtual void Speak() const {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog dog;
    Cat cat;
    animalPtr = &dog;
    animalPtr->Speak();

    animalPtr = &cat;
    animalPtr->Speak();

    return 0;
}