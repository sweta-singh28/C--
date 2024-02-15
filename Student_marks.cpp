#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if (marks >= 90)
    {
        cout<<"A grade"<<endl;
    }
    else if (marks >= 80)
    {
        cout<<"B grade"<<endl;
    }
     else if (marks >= 70)
    {
        cout<<"C grade"<<endl;
    }
     else if (marks >= 60)
    {
        cout<<"D grade"<<endl;
    }
     else if (marks >= 50)
    {
        cout<<"E grade"<<endl;
    }
     else if (marks >= 40)
    {
        cout<<"F grade"<<endl;
    }
     else 
    {
        cout<<"FAIL"<<endl;
    }
    return 0;
}