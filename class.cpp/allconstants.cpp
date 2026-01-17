#include <iostream>
#include <string>
using namespace std;
int main() {
    // Defining constants
    const int DAYS_IN_WEEK = 7;
    const float PI = 3.14159f;
    const char GRADE = 'A';
    const string WELCOME_MSG = "Hello, World!";
    // Displaying constant values
    cout << "Integer constant (DAYS_IN_WEEK): " << DAYS_IN_WEEK << endl;
    cout << "Float constant (PI): " << PI << endl;
    cout << "Char constant (GRADE): " << GRADE << endl;
    cout << "String constant (WELCOME_MSG): " << WELCOME_MSG << endl;
    // Trying to modify constants will cause compile-time error
    // DAYS_IN_WEEK = 8; // Uncommenting this line will cause an error
    return 0;
}
