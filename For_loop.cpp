#include<iostream>
using namespace std;

int main(){
    // for (int i = 5; i > 0; i = i-1)
    // {
    //     cout<< i << endl;
    // }

    // for (int i = 0; i <= 5; i = i+2)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 1; i <= 5; i = i+2)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 1; i < 10; i = i*2)
    // {
    //     cout << i << endl;
    // }
    
    // for (int i = 5; (i>=0 && i<=10); i++)
    // {
    //     cout<< i << endl;
    // }
    

    int i = 0;
    for (; ; )
    {
       if (i<5)
       {
        cout<<i<<endl;
        i = i+1;
       }
       
    }
    return 0;
}