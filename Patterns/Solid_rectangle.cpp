#include<iostream>
using namespace std;
// Print Solid rectangle pattern.

int main(){

    for(int row=0; row<3; row=row+1)
{
    for(int col=0; col<5; col=col + 1)
    {
        cout<<"* ";
    }
        cout<<endl;
}
    return 0;
}
