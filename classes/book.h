#include <iostream>
#include <string>
using namespace std;

const int MAX_BOOKS = 50;
const int MAX_MEMBERS = 20;

class Book {
public:
    string title;
    string author;
    bool isIssued;

    Book() : isIssued(false) {}

    void display() const {
        cout << "Title: " << title << "\nAuthor: " << author;

        if(isIssued) {
            cout << "(Issued)";
        }

        else{
            cout << "(Available)";
        }
    }
};


