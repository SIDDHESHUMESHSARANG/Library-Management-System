#include <iostream>
#include <string>
#include "book.h" 
using namespace std;

class Member {
public:
    string name;
    string issuedBook;

    Member() : issuedBook("") {}

    void issueBook(Book* book) {
        if (!book->isIssued) {
            issuedBook = book->title;
            book->isIssued = true;
            cout << name << " has issued the book: " << book->title << endl;
        } else {
            cout << "Book: " << book->title << " is already issued" << endl;
        }
    }

    void returnBook(Book* book) {
        if (issuedBook == book->title) {
            issuedBook = "";
            book->isIssued = false;
            cout << name << " has returned the book: " << book->title << endl;
        } else {
            cout << "Book: " << book->title << " is not issued by " << name << endl;
        }
    }

    void displayIssuedBook() const {
        if (issuedBook != "") {
            cout << name << " has issued the following book: " << issuedBook << endl;
        } else {
            cout << name << " has no books issued" << endl;
        }
    }
};
