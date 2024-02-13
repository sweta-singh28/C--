#include <iostream>

using namespace std;

int main(){
int p, r, t, SI;
cout<<"Enter the principle amount: "<<endl;
cin>>p;
cout<<"Enter the rate of interest: "<<endl;
cin>>r;
cout<<"Enter the time period: "<<endl;
cin>>t;

SI = p * r * t /100;
cout<<"The simple interest of the given amount: "<<SI<<endl;

return 0;

}