#include<iostream>
using namespace std;

void printName(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Sweta"<<endl;
    }

}


void printNumber(int num){
    cout<<num<<endl;
}

int main(){

    //function call
    // printName();


    int a = 5;
    printNumber(a);
    return 0;
}