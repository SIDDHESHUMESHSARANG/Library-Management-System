#include <iostream>
#include <algorithm>
#include "library.h"

using namespace std;

int main() {
    Library library;
    int choice;
    string bookTitle, memberName;

    while (true) {
        cout << "\nLibrary Management System" << endl;
        cout << "1. Issue Book" << endl;
        cout << "2. Return Book" << endl;
        cout << "3. Delete Book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter book title: ";
                getline(cin, bookTitle);
                cout << "Enter member name: ";
                getline(cin, memberName);
                library.issueBook(bookTitle, memberName);
                break;
            
            case 2:
                cout << "Enter book title: ";
                getline(cin, bookTitle);
                cout << "Enter member name: ";
                getline(cin, memberName);
                library.returnBook(bookTitle, memberName);
                break;
            
            case 3:
                cout << "Enter book title to delete: ";
                getline(cin, bookTitle);
                library.books.erase(remove_if(library.books.begin(), library.books.end(), [&](const Book &b) { return b.title == bookTitle; }), library.books.end());
                cout << "Book Deleted!" << endl;
                break;
            
            case 4:
                cout << "Exiting..." << endl;
                return 0;
            
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }
}