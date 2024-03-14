#include<iostream>
using namespace std;


int getFactorial(int n){
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial*= i;
    }
    return factorial;

}


int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int finalFact = getFactorial(n);
    cout<<"The factorial of the given number is: "<<finalFact<<endl;

    return 0;
}