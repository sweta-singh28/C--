#include<iostream>
using namespace std;

int getSquare(int num){
    int sq = num * num;
    return sq;
}

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
     
    int finalSquare = getSquare(num);
    cout<<"The square of the given number is "<<finalSquare<<endl;

    return 0;
}