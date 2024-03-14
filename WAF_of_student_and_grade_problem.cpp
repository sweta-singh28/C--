#include<iostream>
using namespace std;

char getGrade(int marks){
    //using if-else 
    // if(marks >= 90){
    //     return 'A';
    // }
    // else if(marks >= 80){
    //     return 'B';
    // }
    // else if(marks >= 70){
    //     return 'C';
    // }
    // else if(marks >= 60){
    //     return 'D';
    // }
    // else{
    //     return 'E';
    //}
    

    //switch case 
    switch (marks/10)
    {
    case 10: return 'A'; break;
    case 9: return 'A'; break;
    case 8: return 'B'; break;
    case 7: return 'C'; break;
    case 6: return 'D'; break;
    default: return 'E'; break;
    }



}

int main(){
    int marks;
    // cout<<"Enter the marks: "<<endl;
    // cin>>marks;
    for(int i=0; i<=100; i++){
        char grade = getGrade(marks);
        cout<<"Grade for marks: "<<i<<" is "<<grade<<endl;
    }
    

    return 0;
}