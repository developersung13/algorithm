#include <iostream>
using namespace std;
class Circle;  
class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // 프렌드 함수 선언
    friend void CompareArea(const Rectangle& rect, const Circle& circ);
};
class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    // 프렌드 함수 선언
    friend void CompareArea(const Rectangle& rect, const Circle& circ);
};

void CompareArea(const Rectangle& rect, const Circle& circ) {
    double C = 3.14 * circ.radius * circ.radius;
    double R = rect.width * rect.height;


    if (C == R) {
        cout << "Same" << endl;
    }
    else {
        if (C > R) {
            cout << "Circle" << endl;
        }
        else {
            cout << "Rect" << endl;
        }
    }
    // 직사각형의 면적이 크면 “Rect” 출력
    // 원의 면적이 더 크면 “Circle” 출력  (원주율은 3.14로 계산)
    // 두 도형의 면적이 같으면 “Same” 출력
}

int main() {  
   double w, h, r;
   
    cin >> w >> h >> r;
   
    Rectangle rect(w, h);   // 직사각형 객체 생성
    Circle circ(r);  // 원 객체 생성
   
    CompareArea(rect, circ); // 면적 비교
    return 0;
}