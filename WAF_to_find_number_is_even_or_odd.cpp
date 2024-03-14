#include<iostream>
using namespace std;

string getEvenOdd(int num){
    if(num%2 == 0){
        return "Even";
    }
    else{
        return "odd";
    }
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    string finalResult = getEvenOdd(num);
    cout<<"The given number is: "<<finalResult;
    return 0;
}