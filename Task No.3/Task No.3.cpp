#include <iostream>
#include <string>
using namespace std;
class LibraryItem
{
public:
    virtual void display() = 0;   
    virtual ~LibraryItem() {}
};
class Book : public LibraryItem
{
private:
    string title;
    string author;
    int pages;
public:
    Book() {}
    Book(string t, string a, int p)
    {
        title = t;
        author = a;
        pages = p;
    }
    string getTitle()
    { 
        return title;
    }
    int getPages() 
    { 
        return pages;
    }
    void display() override
    {
        cout << "Book = " << title << ", Author = " << author << ", Pages = " << pages << endl;
    }
};
class Newspaper : public LibraryItem
{
private:
    string name;
    string date;
    string edition;
public:
    Newspaper() {}
    Newspaper(string n, string d, string e)
    {
        name = n;
        date = d;
        edition = e;
    }
    string getName()
    { 
        return name;
    }
    string getEdition()
    { 
        return edition;
    }
    void display() override
    {
        cout << "Newspaper = " << name << ", Date = " << date << ", Edition = " << edition << endl;
    }
};
template <typename T>
void selectionSortByPages(T arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j].getPages() < arr[minIndex].getPages())
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
template <typename T>
void selectionSortByEdition(T arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j].getEdition() < arr[minIndex].getEdition())
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
class Library
{
private:
    Book books[10];
    Newspaper newspapers[10];
    int bookCount = 0;
    int newspaperCount = 0;
public:
    void addBook(Book b)
    {
        books[bookCount++] = b;
    }
    void addNewspaper(Newspaper n)
    {
        newspapers[newspaperCount++] = n;
    }
    void displayCollection()
    {
        for (int i = 0; i < bookCount; i++) 
        {
            books[i].display();
        }
        for (int i = 0; i < newspaperCount; i++)
        {
            newspapers[i].display();
        }
    }
    void sortBooksByPages()
    {
        selectionSortByPages(books, bookCount);
    }
    void sortNewspapersByEdition()
    {
        selectionSortByEdition(newspapers, newspaperCount);
    }
    Book* searchBookByTitle(string key)
    {
        for (int i = 0; i < bookCount; i++) 
        {
            if (books[i].getTitle() == key)
            {
                return &books[i];
            }
        }
        return nullptr;
    }
    Newspaper* searchNewspaperByName(string key)
    {
        for (int i = 0; i < newspaperCount; i++)
        {
            if (newspapers[i].getName() == key)
            {
                return &newspapers[i];
            }
        }
        return nullptr;
    }
};
int main()
{
    Book book1("The Catcher in the Rye", "J.D. Salinger", 277);
    Book book2("To Kill a Mockingbird", "Harper Lee", 324);
    Newspaper newspaper1("Washington Post", "2024-10-13", "Morning Edition");
    Newspaper newspaper2("The Times", "2024-10-12", "Weekend Edition");
    Library library;
    library.addBook(book1);
    library.addBook(book2);
    library.addNewspaper(newspaper1);
    library.addNewspaper(newspaper2);
    cout << "Before Sorting = " << endl;
    library.displayCollection();
    library.sortBooksByPages();
    library.sortNewspapersByEdition();
    cout << endl;
    cout << "After Sorting = " << endl;
    library.displayCollection();
    Book* foundBook = library.searchBookByTitle("The Catcher in the Rye");
    if (foundBook)
    {
        cout << endl << "Found Book = " << endl;
        foundBook->display();
    }
    else 
    {
        cout << endl << "Book not found" << endl;
    }
    Newspaper* foundNewspaper = library.searchNewspaperByName("The Times");
    if (foundNewspaper) 
    {
        cout << endl << "Found Newspaper = " << endl;
        foundNewspaper->display();
    }
    else
    {
        cout << endl << "Newspaper not found" << endl;
    }
    return 0;
}