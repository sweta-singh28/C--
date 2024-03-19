#include<iostream>
using namespace std;

void getSwapnums(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(){
    int num1, num2;
    cout<<"Enter the value of num1: "<<endl;
    cin>>num1;

    cout<<"Enter the value of num2: "<<endl;
    cin>>num2;

    getSwapnums(num1, num2);
    cout<<"The swapped values are: "<<num1<<" and "<<num2<<endl;
    return 0;
}
