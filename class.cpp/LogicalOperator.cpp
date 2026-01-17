#include <iostream>
using namespace std;
int main() {
    int a, b;
    int choice;
    cout << "Enter two boolean values (0 for false, 1 for true): ";
    cin >> a >> b;

    cout << "\nLogical Operations Menu :\n";
    cout << "1. Logical AND (p && q)\n";
    cout << "2. Logical OR (p || q)\n";
    cout << "3. Logical NOT (!p)\n";
    cout << "4. Logical NOT (!q)\n";
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
        case 1:
            cout << "Result: " << (a && b) << endl;
            break;
        case 2:
            cout << "Result: " << (a || b) << endl;
            break;
        case 3:
            cout << "Result: " << (!a) << endl;
            break;
        case 4:
            cout << "Result: " << (!b) << endl;
            break;
        default:
            cout << "Invalid choice!\n";
    }
    return 0;
}

