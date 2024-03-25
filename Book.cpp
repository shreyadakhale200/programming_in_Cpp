// Library Catalog with Books and Journals:
// Problem Statement: Build a library catalog system.
// Create a base class LibraryItem with properties like title and author.
// Then, derive classes like Book and Journal, each with their unique properties.
// Implement methods to check out and return items in the derived classes.
#include <iostream>
#include <string>
using namespace std;

class LibraryItem
{
protected:
    string title;
    string author;
    bool checkedOut;

public:
    LibraryItem(string title, string author)
    {
        this->title = title;
        this->author = author;
        checkedOut = false;
    }

    void checkOut()
    {
        if (!checkedOut)
        {
            checkedOut = true;
            cout << "Item checked out successfully." << endl;
        }
        else
        {
            cout << "Item is already checked out." << endl;
        }
    }

    void returnItem()
    {
        if (checkedOut)
        {
            checkedOut = false;
            cout << "Item returned successfully." << endl;
        }
        else
        {
            cout << "Item is already available." << endl;
        }
    }

    virtual void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Checked Out: " << (checkedOut ? "Yes" : "No") << endl;
    }
};

class Book : public LibraryItem
{
private:
    int pages;

public:
    Book(string title, string author, int pages) : LibraryItem(title, author)
    {
        this->pages = pages;
    }

    void display() override
    {
        LibraryItem::display();
        cout << "Pages: " << pages << endl;
    }
};

class Journal : public LibraryItem
{
private:
    string journalType;

public:
    Journal(string title, string author, string journalType) : LibraryItem(title, author)
    {
        this->journalType = journalType;
    }

    void display() override
    {
        LibraryItem::display();
        cout << "Journal Type: " << journalType << endl;
    }
};

int main()
{
    Book book("Harry Potter", "JK Rowling", 500);
    Journal journal("Scientific American", "John Doe", "Science");

    cout << "Book Details:" << endl;
    book.display();
    cout << endl;

    cout << "Journal Details:" << endl;
    journal.display();
    cout << endl;

    book.checkOut();
    book.display();
    cout << endl;

    journal.checkOut();
    journal.display();
    cout << endl;

    book.returnItem();
    book.display();
    cout << endl;

    return 0;
}
