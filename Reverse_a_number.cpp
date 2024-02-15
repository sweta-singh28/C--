#include<iostream>
using namespace std;

int main(){
     int num, reverseNumber = 0, remainder;
     cout<<"Enter an integer: "<<endl;
     cin>>num;

     while (num != 0)
     {
        remainder = num %10;
        reverseNumber = reverseNumber * 10 + remainder;
        num = num / 10;
     }
     cout<<"reversed number: "<<reverseNumber<<endl;

    return 0;
}