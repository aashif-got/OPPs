#include <iostream>
using namespace std;
class book{
    private:
        string title;
        int price;
    public:
        void settitle (string t){
            title = t;
        }
        string gettitle (){
            return title;
        }
        void setprice (int p){
            price = p;
        }
        int getprice (){
            return price;
        }


};
int main (){
    book bk;
    string t = "lord of the rings";
    int p = 2000;
    bk.setprice(p);
    bk.settitle(t);
    cout << "Title: " << bk.gettitle() << endl;
    cout << "Price: " << bk.getprice() << endl;
    return 0;

}