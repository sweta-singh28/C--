#include <iostream>

using namespace std;
int main(){

int N;
cout<<"Enter a number N: "<<endl;
cin>>N;

cout<<"Even numbers from " <<N<< "to 1"<<endl;

for (int i = N; i >= 1; i--)
{
  if (i % 2 == 0)
  {
    cout<<i<<endl;
  }
   
}
    return 0;
}