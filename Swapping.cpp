#include <iostream>
using namespace std;
int main(){
int a;
int b;
int temp;
cout<<"Enter the value of a: "<<endl;
cin>>a;
cout<<"Enter the value of b: "<<endl;
cin>>b;
cout<<"Before swapping"<<endl;
cout<<"a = " <<a <<"b = " <<b <<endl;

temp = a;
a = b;
b = temp;

cout<<"After swapping"<<endl;
cout<<"a = " <<a <<"b = " <<b  <<endl;


    return 0;
}