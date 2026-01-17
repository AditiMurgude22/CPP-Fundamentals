#include<iostream>
using namespace std;
class complex {
private:
float real,img;

public:
void setValues(float r , float i)
{
    real = r;
    img = i;

}
complex add(complex c)
{
    complex tem;
    tem.real = real+c.real;
    tem.img = img+c.img;
    return tem;
}
complex sub(complex c)
{
    complex tem;
    tem.real = real-c.real;
    tem.img = img+c.img;
    return tem;
}
void display ()
{
    if (img>=0)
    cout<< real <<"+"<< img<<"i";
    else
    cout<< real <<"-"<< img <<"i";

}
};
int main()
{
    complex c1,c2,result;
    float i,r;
    cout<<"Enter real and img no. of first no.:";
    cin>>r>>i;
    c1.setValues(r,i);

    cout<<"Enter real and img no. of second no.:";
    cin>>r>>i;
    c2.setValues(r,i);

    cout<<"\nfirst complex no:";
    c1.display();
    cout<<"\nsecond complex no:";
    c2.display();

    result=c1.add(c2);
    cout<<"\naddition:";
    result.display();

    result=c2.sub(c2);
    cout<<"\nsubstraction:";
    result.display();

    cout<<endl;
    return 0;


}
