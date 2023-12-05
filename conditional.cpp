#include<iostream>
using namespace std;

int main(){
    // conditional statment

    int age;
    cout<<"Enter your age: ";
    cin>>age;
// check whether the candidate is eligible for vote or not
    if(age<18){
        cout<<"You are not eligible for vote: ";
    }
    else{
        cout<<"You are eligible for vote: ";
    }
    return 0;

}