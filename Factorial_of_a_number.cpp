#include<iostream>
using namespace std;

int main(){
   int number;
   float factorial = 1;

   cout<<"Enter an integer: "<<endl;
   cin>>number;
   if (number < 0)
   {
    cout<<"Error! Factorail of a negative number doesnot exist. "<<endl;
   }
   else{
    for (int i = 1; i<= number; ++i)
         factorial*=i;
    {
       cout << "Factorial of " << number << " = " << factorial;
    }
    
   }

    return 0;
}