#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter your age: "<<endl;
cin>>age;
switch (age)
{
case 17:
    cout<<"You are 17"<<endl;
    break;
    case 22:
    cout<<"You are 22"<<endl;
    break;
    case 18:
    cout<<"You are 18"<<endl;
    break;
    case 25:
    cout<<"You are 25"<<endl;
    break;
default:
    cout<<"No special cases"<<endl;
    break;
}



    return 0;
}