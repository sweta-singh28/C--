#include<iostream>
using namespace std;

int main(){
int a, b, c;
cout<<"Enter the first side of the triangle: "<<endl;
cin>>a;
cout<<"Enter the second side of the triangle: "<<endl;
cin>>b;
cout<<"Enter the third side of the triangle: "<<endl;
cin>>c;

if (a + b > c && b + c > a && a + c > b)
{
   cout<<"Triangle is valid."<<endl;
}
else
{
    cout<<"Triangle is not valid."<<endl;
}
    return 0;
}