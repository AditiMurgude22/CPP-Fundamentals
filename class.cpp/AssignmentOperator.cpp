#include <iostream>
using namespace std;
int main() {
    int a, choice;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "\nAssignment Operations Menu:\n";
    cout << "1. a += 5\n";
    cout << "2. a -= 3\n";
    cout << "3. a *= 2\n";
    cout << "4. a /= 4\n";
    cout << "5. a %= 3\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            a += 5;
            cout << "Result: " << a << endl;
            break;
        case 2:
            a -= 3;
            cout << "Result: " << a << endl;
            break;
        case 3:
            a *= 2;
            cout << "Result: " << a << endl;
            break;
        case 4:
            a /= 4;
            cout << "Result: " << a << endl;
            break;
        case 5:
            a %= 3;
            cout << "Result: " << a << endl;
            break;
        default:
            cout << "Invalid choice!\n";
    }
    return 0;
}
