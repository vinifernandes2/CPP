#include <iostream>
using namespace std;

//Esse codigo é para mostrar o construtor

class Book{
    public:
        string title;
        string author;
        int pages;

    Book(){
        title = "Samsung";
        author = "Xaolin Matador de Porco";
        pages = 738;
    }

    Book(string aTitle, string aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;

    }

};

int main(){

    Book book1("Harry Potter", "Gisele do Grau", 564);
    cout << book1.title << endl << book1.author << endl << book1.pages << endl;

    Book book2;
    cout << book2.author;
    

    return 0;
}
