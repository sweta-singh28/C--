#include<iostream>
using namespace std;



int maxofNum(int num1, int num2, int num3){
    if(num1>num2 && num1>num3){
        return num1;
    }
    else if(num2>num1 && num2>num3){
        return num2;
    }
    else{
        return num3;
    }



}



int main(){

    int a, b, c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enetr the value of b: "<<endl;
    cin>>b;

    cout<<"Enter the value of c: "<<endl;
    cin>>c;

    int max = maxofNum(a, b, c);
    cout<<"The maximum of the three numbers is: "<<max<<endl;


    return 0;
}