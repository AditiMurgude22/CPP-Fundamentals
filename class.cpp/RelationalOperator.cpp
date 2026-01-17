#include <iostream>
using namespace std;
int main() {
    int a, b, choice;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "\nRelational Operations Menu:\n";
    cout << "1. a == b\n";
    cout << "2. a != b\n";
    cout << "3. a > b\n";
    cout << "4. a < b\n";
    cout << "5. a >= b\n";
    cout << "6. a <= b\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << (a == b) << endl;
            break;
        case 2:
            cout << (a != b) << endl;
            break;
        case 3:
            cout << (a > b) << endl;
            break;
        case 4:
            cout << (a < b) << endl;
            break;
        case 5:
            cout << (a >= b) << endl;
            break;
        case 6:
            cout << (a <= b) << endl;
            break;
        default:
            cout << "Invalid choice!\n";
    }
    return 0;
}
