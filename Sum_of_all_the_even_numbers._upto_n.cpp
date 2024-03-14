#include<iostream>
using namespace std;


int getEvenSum(int n){
    int sum = 0;
    for(int i =0; i<=n; i++){
        if(i%2 == 0){
           sum+=i;
        }
   
    }
     return sum;
}



int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int finalSum = getEvenSum(n);
    cout<<"The sum of all the even number upto "<<n<<" is "<<finalSum<<endl;


    return 0;
}