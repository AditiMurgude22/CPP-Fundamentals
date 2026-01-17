#include<iostream>
using namespace std;
class rectangle{
    private:
    float length;
    float width;

    public:
    rectangle(float l,float w)
    {
    length=l;
    width=w;

    }
    void area()
    {
        cout<<"area:"<<length*width<<endl;

    }
    void perimeter()
    {
        cout<<"perimeter:"<<2*(length+width);

    }
    rectangle()
    {

    }

};
int main()
{
    float l,w;
    cout<<"Enter length of rectangle:";
    cin>>l;
    cout<<"Enter width of rectangle:";
    cin>>w;
    rectangle rect(l,w);

    rect.area();
    rect.perimeter();
    return 0;
}
