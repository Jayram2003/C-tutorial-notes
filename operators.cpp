#include<iostream>
using namespace std;

int main(){
    //operators in c++
             // Arithmetic Operators  : +, -,..
            // Unary Operators : ++, --
            // Assignment Operator : =,+=,-=  
            // Relational Operators: ==,>,<,>=,<=
            // Logical Operators : &&, ||
            // Ternary Operator : max = (n1 > n2) ? n1 : n2;
       int n1,n2,max;
       max = (n1 > n2) ? n1 : n2;
    
    if(n1>n2){
        cout<<n1;
    }
    else{
     cout<<n2;
    }
  
}