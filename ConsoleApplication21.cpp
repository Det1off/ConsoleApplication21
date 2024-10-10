#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};

struct Rectangle {
    Point bottomLeft;
    Point topRight;
};


bool isPointInsideRectangle(const Rectangle& rect, const Point& point) {
    return (point.x >= rect.bottomLeft.x && point.x <= rect.topRight.x &&
        point.y >= rect.bottomLeft.y && point.y <= rect.topRight.y);
}

int main() {

    Rectangle rect;
    rect.bottomLeft = { 0.0, 0.0 };
    rect.topRight = { 5.0, 5.0 };


    Point p;
    cout << "Введите координаты точки (x, y): ";
    cin >> p.x >> p.y;


    if (isPointInsideRectangle(rect, p)) {
        cout << "Точка находится внутри прямоугольника." << "\n";
    }
    else {
        cout << "Точка находится вне прямоугольника." << "\n";
    }

    return 0;
}
