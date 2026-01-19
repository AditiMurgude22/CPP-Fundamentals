#include<iostream>
#define PI 3.14
#define AREA(r)(PI*r*r)
using namespace std;
int main()
{
int radius = 4;
cout<<"radius;"<<radius<<endl;
cout<<"AREA of circle:"<<AREA(radius)<<endl;
return 0;
}
