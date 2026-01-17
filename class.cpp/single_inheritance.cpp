#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    void setStudentDetails() {
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();
    }
    void displayStudentDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Exam : public Student {
private:
    int mathMarks;
    int scienceMarks;
public:
    void setMarks() {
        cout << "Enter Math Marks: ";
        cin >> mathMarks;
        cout << "Enter Science Marks: ";
        cin >> scienceMarks;
        cin.ignore();
    }
    void displayMarks() {
        displayStudentDetails();
        cout << "Math Marks: " << mathMarks << endl;
        cout << "Science Marks: " << scienceMarks << endl;
    }
};

int main() {
    Exam studentExam;

    studentExam.setStudentDetails();
    studentExam.setMarks();

    cout << "\nStudent Exam Details:\n";
    studentExam.displayMarks();

    return 0;
}
