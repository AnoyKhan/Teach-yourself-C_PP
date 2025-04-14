#include <iostream>
#include <string>
using namespace std;

class Card {
private:
    string title;
    string author;
    int copies;

public:
    void store(const string& bookTitle, const string& bookAuthor, int numCopies) {
        title = bookTitle;
        author = bookAuthor;
        copies = numCopies;
    }

    void show() const {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copies << endl;
    }
};

int main() {
    Card book;
    book.store("Teach Yourself C++", "Herbert Schildt", 5);
    book.show();
    return 0;
}
