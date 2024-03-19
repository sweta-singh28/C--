#include<iostream>
using namespace std;

int getTemp(int temp){
    int t = (9/5) * temp + 32;
    return t;
}


int main(){
    int temp;
    cout<<"Enter temperature in Celcius: "<<endl;
    cin>>temp;

    int finalTemp = getTemp(temp);
    cout<<"The temperature in Fahrenheit is: "<<finalTemp<<endl; 
    return 0;
}