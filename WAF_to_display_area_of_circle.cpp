#include<iostream>
using namespace std;

int getArea(int r){
    int area = 3.14 * r * r;
    return area;
}



int main(){
    int r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;

    int finalArea = getArea(r);
    cout<<"The arae of the circle is: "<<finalArea<<endl;


    return 0;
}