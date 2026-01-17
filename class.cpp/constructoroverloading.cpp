#include<iostream>
using namespace std;

class rectangle {
private:
int length,width;
public:
rectangle(){
    length=0;
    width=0;
    cout << "Default constructor called:"<< length << width << endl;
}

rectangle(int l,int w){
   length=l;
   width=w;
   cout<<"Paramerized constructor called:"<< length << width << endl;

}

    rectangle(const rectangle &rect) {
        length = rect.length;
        width = rect.width;
        cout << "Copy constructor called:" << length << width << endl;

}
int area() {
        return length * width;
    }

 void display() {
        cout << "Rectangle = Length: " << length << ", Width: " << width << "]" << endl;
    }
};

int main() {
   rectangle rect1;
    cout << "Area of rect1: " << rect1.area() << endl;
    rect1.display();

    rectangle rect2(10, 5);
    cout << "Area of rect2: " << rect2.area() << endl;
    rect2.display();

    rectangle rect3 = rect2;  
    cout << "Area of rect3: " << rect3.area() << endl;
    rect3.display();

    return 0;
}
