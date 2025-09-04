#include <iostream>
using namespace std;
class car{
    private:
        string brand ;
        string model ;
    public:
        void setbrand(string b){
            brand = b;
        }
        void setmodel(string m){
            model = m;
        }
        string getbrand(){
            return brand;
        }
        string getmodel(){
            return model;
        }
        void display (){
            cout << "Brand: " << brand << "Model: " << model << endl;
 
        }



};
int main (){
    car car;
    string brand;
    string model;
    int num;
    cout << "enter the number of cars:";
    cin >> num;
    for (int i = 0; i < num ; i++)
    {
        cout << "enter deatails for car " << i+1 << endl;
        cout << "Brand: " << endl;
        cin >> brand;
        cout << "Model: " << endl;
        cin >> model;
        car.setbrand(brand);
        car.setmodel(model);

    }
    for (int i = 0; i < num; i++)
    {
        car.display();
    }
    
    
}