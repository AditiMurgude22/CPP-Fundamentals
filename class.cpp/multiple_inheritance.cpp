#include<iostream>
#include<string>
using namespace std;
class CSE
{
    private:
    string student_name;
    string project_name;
    int roll_no;

    public:
    void set1()
    {
        cout<<"Enter the name of the Student:"<<endl;
        cin>>student_name;
        cout<<"Enter the project name:"<<endl;
        cin>>project_name;
        cout<<"Enter thr Roll number of the student"<<endl;
        cin>>roll_no;

    }
    void set()
    {
        cout<<"Student Name:"<<student_name<<endl;
        cout<<"Project Name:"<<project_name<<endl;
        cout<<"Roll no:"<<roll_no<<endl;

    }
};

class AIML
{
    private:
    string student_name;
    string project_name;
    int roll_no;

    public:
    void get()
    {
        cout<<"Enter the name of the Student:"<<endl;
        cin>>student_name;
        cout<<"Enter the project name:"<<endl;
        cin>>project_name;
        cout<<"Enter thr Roll number of the student"<<endl;
        cin>>roll_no;

    }
    void get1()
    {
        cout<<"Student Name:"<<student_name<<endl;
        cout<<"Project Name:"<<project_name<<endl;
        cout<<"Roll no:"<<roll_no<<endl;

    }
};
int main()
{
	CSE a;
	a.set1();
	a.set1();
	AIML E;
	E.get();
	E.get1();
	return 0;
}

