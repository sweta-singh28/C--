#include<iostream>
using namespace std;

int main(){
    int val;
    cout<<"Enter the value: ";
    cin>>val;

    switch (val)
    {
    case 1:
       cout<<"Sweta";
        break;
    case 2:
        cout<<"Gungun";
        break;
    case 3:
        cout<<"Joy";
        break;
     case 4:
        cout<<"Heheheh";
        break;
    case 5:
        cout<<"lalala";
        break;
    
    default:
        cout<<"Nothing";
        break;
    }
    return 0;
}