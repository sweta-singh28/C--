#include<iostream>
using namespace std;


//function declaration
int addNum(int a, int b){

    int result = a + b;
    return result;
}

int main(){

    int a, b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;


    //function calling
    int sum = addNum(a, b);
    cout<<"The addition of two numbers is: "<<sum<<endl;


    return 0;
}