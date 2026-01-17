#include<iostream>
using namespace std;
class rectangle
{
    private:
    float length;
    float width;
    
    public :
    rectangle(){
        cout<<"enter the length of rectangle:";
        cin>>length;
        cout<<"enter the width of rectangle:";
        cin>>width;
    }
 float calculate area(){
    length*width;
}
void display(){
    cout<<"length:"<<length<<endl;
    cout<<"width:"<<width<<endl;
    cout<<"area:"<<area<<endl;
}
rectangle(){
    cout<<"destroyer called rectangle object is being destroyer"<<endl;
}
int main(){
    rectangle react;
    react.display();

    return 0;
}
 }