#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<2*n; i++){
        int cond= i < n ? i : 0;
        int space_count = i < n ? 2*(n-cond-1):0;
        for(int j=0; j<2*n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}