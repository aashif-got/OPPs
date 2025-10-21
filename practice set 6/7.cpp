#include<iostream>
using namespace std;
class counter{
    private:
        int count;
        static int total_count;
    public:
        counter(int c){
            this->count = c;
            total_count++;

        }
        void show_count(){
            cout << "count is:" << count << endl;
        }
        static void  show_totalcount(){
            cout << " total number of objects:" << total_count << endl;
        }


};
int counter :: total_count;
int main()
{
    counter c1(1), c2(2), c3(3);
    c1.show_count();
    c2.show_count();
    c3.show_count();
    // access static data member without object
    counter::show_totalcount();


    

    return 0;
}