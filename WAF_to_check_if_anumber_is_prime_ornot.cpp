#include<iostream>
using namespace std;

string getPrime(int n){
   int i = 2;
   for(int i =2; i<n; i++){
    if(n%i == 0){
        return " Not Prime";
    }
    else{
        return "Prime";
    }
   }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    string finalResult = getPrime(n);
    cout<<"The given number is: "<<finalResult<<endl;
    return 0;
}