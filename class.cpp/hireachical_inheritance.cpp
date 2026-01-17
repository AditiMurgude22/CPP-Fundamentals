#include <iostream>
#include <string>
using namespace std;

class Library {
protected:
    string libraryName;
    string location;
public:
    void setLibraryDetails() 
    {
        cout << "Enter Library Name: ";
        getline(cin, libraryName);
        cout << "Enter Library Location: ";
        getline(cin, location);
    }

    void displayLibraryDetails() 
    {
        cout << "\nLibrary Name: " << libraryName << endl;
        cout << "Library Location: " << location << endl;
    }
};

class Books : public Library {
private:
    string title;
    string author;
    string ISBN;
public:
    void setBookDetails() 
    {
        cout << "\nEnter Book Title: ";
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter ISBN: ";
        getline(cin, ISBN);
    }

    void displayBookDetails() 
    {
        cout << "\nBook Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
    }
};

class Members : public Library {
private:
    string memberName;
    int memberID;
public:
    void setMemberDetails() 
    {
        cout << "\nEnter Member Name: ";
        getline(cin, memberName);
        cout << "Enter Member ID: ";
        cin >> memberID;
    
    }

    void displayMemberDetails() 
    {
        cout << "\nMember Details:" << endl;
        cout << "Name: " << memberName << endl;
        cout << "Member ID: " << memberID << endl;
    }
};

int main() {
    Books book1;
    Members member1;

    cout << "Enter Library Details for Book:" << endl;
    book1.setLibraryDetails();

    cout << "\nEnter Library Details for Member:" << endl;
    member1.setLibraryDetails();

    book1.setBookDetails();
    member1.setMemberDetails();

    cout << "\n=== Library Information for Book ===" << endl;
    book1.displayLibraryDetails();
    book1.displayBookDetails();

    cout << "\n=== Library Information for Member ===" << endl;
    member1.displayLibraryDetails();
    member1.displayMemberDetails();

    return 0;
}
