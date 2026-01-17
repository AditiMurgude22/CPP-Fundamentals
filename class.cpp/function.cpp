#include <iostream>
using namespace std;

class Shape {
public:
    int area(int side) {
        return side * side;
    }

    int area(int length, int breadth) {
        return length * breadth;
    }

    float area(float base, float height) {
        return 0.5f * base * height;
    }

    float area(float radius) {
        return 3.14159f * radius * radius;
    }

  void display() {
        int side, length, breadth;
        float base, height, radius;

        cout << "Enter side length of square: ";
        cin >> side;
        cout << "Area of square: " << area(side) << endl;

        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;
        cout << "Area of rectangle: " << area(length, breadth) << endl;

        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
        cout << "Area of triangle: " << area(base, height) << endl;

        cout << "Enter radius of circle: ";
        cin >> radius;
        cout << "Area of circle: " << area(radius) << endl;
    }
};

int main() {
    Shape shape;
    shape.display();
    return 0;
}
