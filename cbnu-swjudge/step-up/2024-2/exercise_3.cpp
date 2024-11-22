#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
    int area;
public:
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }
    int getArea() {
        return area;
    }
    void Area() {
        area = width * height;
    }
};

int main() {
    Rectangle rect;
    Rectangle* rectPtr = &rect;
    
    int w, h;
    int area = 0;
    cin >> w >> h;

    rectPtr->setDimensions(w, h);
    rectPtr->Area();
    cout << rectPtr->getArea() << endl;
    return 0;
}