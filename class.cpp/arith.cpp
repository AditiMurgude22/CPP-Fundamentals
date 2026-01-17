#include<iostream>
using namespace std;
int main()
{
int d,b,sign;
cout<<"enter two numbers";
cin>>d;
cin>>b;
cout<<"press 1 for addition,press 2 for subtraction,press 3 for  multiplication,press 4 division";
cin>>sign;
switch (sign)
{
case 1:
cout<<"addition is "<<(d+b);
break;
case 2:
cout<<"subtraction is "<<(d-b);
break;
case 3:
cout<<"multiplication is "<<(d*b);
break;
case 4:
cout<<"division is "<<(d/b);
break;
default:
cout<<"Invalid input";
return 0;

}
}


