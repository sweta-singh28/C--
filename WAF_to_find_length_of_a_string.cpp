#include<iostream>
using namespace std;

int getLength(string word){
    int len = word.length();
    return len;

}





int main(){
    string word;
    cout<<"Enter the word or string: "<<endl;
    cin>>word;  

    int finalLength = getLength(word);
    cout<<"The length of the string is : "<<finalLength<<endl;




    return 0;
}