#include <iostream>
using namespace std;

class Shape {
public:
    int width;
    int height;

protected:
    virtual int area() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(int width, int height) {
        this->width = width;
        this->height = height;
    }
    
    virtual int area() { return width * height; }
};

int main() {
    Rectangle rect(5, 3);
    cout << rect.width << " " << rect.height << " " << rect.area();
}