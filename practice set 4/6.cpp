#include <iostream>
using namespace std;
class book{
    string title;
    string author;
    float price;
    public:
    book(string t){
        title = t;
    }
    book(string t, string a){
        title = t;
        author = a;
    }
    book(string t, string a, float p){
        title = t;
        author = a;
        price = p;
    }
    void display_book(){
        cout << "Title: " << title << "Author: " << author << "Price: " << price << endl;
    }
};
int main (){
    book b1("got"), b2("harry potter", "none"), b3("lord o fthe rings" , "none", 2000 );
    b1.display_book();
    b2.display_book();
    b3.display_book();

}