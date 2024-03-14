#include<iostream>
using namespace std;


void countNumber(int n){
    for(int i=0; i<=n; i++){
        cout<<i<<"  "<<endl;
    
    }
    cout<<endl;

}

int main(){


    int n;
    cout<<"Enter the n: "<<endl;
    cin>>n;
    countNumber(n);


    return 0;
}