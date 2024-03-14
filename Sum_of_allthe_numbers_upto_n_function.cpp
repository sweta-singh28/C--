#include<iostream>
using namespace std;


int getSum(int n){
    int sum = 0;
    for(int i =0; i<=n; i++){
        sum+=i;
    }
    return sum;
}



int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int finalSum = getSum(n);
    cout<<"The sum of all the even number upto "<<n<<" is "<<finalSum<<endl;


    return 0;
}