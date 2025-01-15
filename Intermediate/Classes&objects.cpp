#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;

};

int main(){

    Book book1;

    cout << "Enter a book title: ";
    getline(cin, book1.title);
    
    cout << "Enter an author name: ";
    getline(cin, book1.author);

    cout << "Enter how many pages: ";
    cin >> book1.pages;

    cout << book1.title << endl << book1.author << endl << book1.pages;
    

    return 0;
}
