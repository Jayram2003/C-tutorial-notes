#include<iostream>
using namespace std;

void factorial(int n){ // with argument and without argument 
    int fact = 1;
    int i=1;

    while(i<=n){
        fact = fact*i;
        i++;
    }
    cout<<"Factorial= "<<fact;
}
int main(){
    // method or function in c++
    // block of code

    /*
    factorial of a number

    n! = n(n-1)(n-2)(n-3)......*1

    5!= 5(5-1)(5-2).....*1=> 5*4*3*2*1=> 120  
      */

int n =5;
// method calling

factorial(n);
return 0;
}
