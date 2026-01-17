#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPersonDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }
    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    int employeeID;
    string department;
public:
    void setEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cin.ignore();
        cout << "Enter Department: ";
        getline(cin, department);
    }
    void displayEmployeeDetails() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

class Student : public Person {
protected:
    int studentID;
    string course;
public:
    void setStudentDetails() {
        cout << "Enter Student ID: ";
        cin >> studentID;
        cin.ignore();
        cout << "Enter Course: ";
        getline(cin, course);
    }
    void displayStudentDetails() {
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
    }
};

class WorkingStudent : public Employee, public Student {
public:
    void displayWorkingStudentDetails() {
        cout << "\n-- Working Student Details --" << endl;

        cout << "From Employee side:" << endl;
        Employee::displayPersonDetails();
        displayEmployeeDetails();

        cout << "\nFrom Student side:" << endl;
        Student::displayPersonDetails();
        displayStudentDetails();
    }

    void setWorkingStudentDetails() {
        cout << "\nEnter details from Employee side:" << endl;
        Employee::setPersonDetails();
        setEmployeeDetails();

        cout << "\nEnter details from Student side:" << endl;
        Student::setPersonDetails();
        setStudentDetails();
    }
};

int main() {
    WorkingStudent ws;

    ws.setWorkingStudentDetails();

    ws.displayWorkingStudentDetails();

    return 0;
}
