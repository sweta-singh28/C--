#include<iostream>
using namespace std;

int main(){
        int n;
    cin>>n;


    //FULL PYRAMID
    for (int row = 0; row<n; row++)
    {    //space
        for (int col=0; col<n-row-1; col++)
        {
            cout<<"   ";
        }
        //stars
        for (int col=0; col<2*row+1; col++)
        {
            cout<<"*  ";
        }
            cout<<endl;
    }



    //INVERTED FULL PYRAMID
        for (int row = 0; row<n; row++)
    {    //spaces
        for (int col = 0; col < row; col++)
        {
            cout<<"    ";
        }
        //stars
        for (int col=0; col<n-row; col++)
        {
            cout<<"*   ";
        }
            cout<<endl;
    }
    return 0;
}