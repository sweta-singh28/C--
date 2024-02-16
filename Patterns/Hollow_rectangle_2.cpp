#include<iostream>
using namespace std;

int main(){
    for (int row  = 0; row < 6; row++)
    {
        if (row == 0 || row == 5)
        {
            for (int col  = 0; col < 5; col++)
            {
                cout<<"* ";
            }
            
        }
        else{
            cout<<"* ";
            for (int col = 0; col < 3; col++)
            {
                cout<<"  ";
            }
            cout<<"*";
           }
           cout<<endl;
        
    }
    return 0;
}