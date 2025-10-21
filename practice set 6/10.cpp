#include<iostream>
using namespace std;
class matrix{
    int arr[2][2];
    public:
        matrix(int a[2][2]){

            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    this->arr[i][j] = a[i][j];
                }
                
            }
            
        }
        void display(){
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    cout<<arr[i][j] <<endl;
                }
                
            }
            
        }
        friend int add_matrix (matrix &a, matrix &b);

};
int add_matrix (matrix &a, matrix &b){
    int res[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = a.arr[i][j] + b.arr[i][j];
        }
        
    }
    cout << "After adding the two matrix: " << endl;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
        
    }
}
 
int main()
{


    int a[2][2] = { {1,2}, {3,4} };
    matrix m1(a);
    m1.display();
    int b[2][2] = { {5,6}, {7,8} };
    matrix m2(b);
    m2.display();
    add_matrix(m1,m2);



    return 0;
}