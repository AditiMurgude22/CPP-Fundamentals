#include <iostream>
using namespace std;
int main() {
    unsigned int a, b;
    int choice;
    cout << "Enter two positive integers: ";
    cin >> a >> b;
    cout << "\nBitwise Operations Menu:\n";
    cout << "1. a & b\n";
    cout << "2. a | b\n";
    cout << "3. a ^ b\n";
    cout << "4. ~a\n";
    cout << "5. a << 1\n";
    cout << "6. a >> 1\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result: " << (a & b) << endl;
            break;
        case 2:
            cout << "Result: " << (a | b) << endl;
            break;
        case 3:
            cout << "Result: " << (a ^ b) << endl;
            break;
        case 4:
            cout << "Result: " << (~a) << endl;
            break;
        case 5:
            cout << "Result: " << (a << 1) << endl;
            break;
        case 6:
            cout << "Result: " << (a >> 1) << endl;
            break;
        default:
            cout << "Invalid choice!\n";
    }
    return 0;
}
