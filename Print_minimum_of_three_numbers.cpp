#include <iostream>
using namespace std;

int main(){
int num1, num2, num3;
cout<<"Enter the value of num1: "<<endl;
cin>>num1;
cout<<"Enter the value of num2: "<<endl;
cin>>num2;
cout<<"Enter the value of num3: "<<endl;
cin>>num3;

if (num1 < num2 && num1 < num3)
{
    cout<<num1<< " is the minimum of three numbers."<<endl;
}
else if (num2 < num1 && num2 < num3)
{
    cout<<num2<< " is the minimum of three numbers."<<endl;
}
else{
    cout<<num3<< " is the minimum of three numbers"<<endl;
}
    return 0;
}