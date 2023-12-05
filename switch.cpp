#include<iostream>
using namespace std;

int main(){

    //switch case in c++
    // break continue
   //button = case

   int ch;
   cout<<"Enter your choise: ";
   cin>>ch;
  
  switch(ch){
     case 1:
     cout<<"Hi";
     break;
     
     case 2:
     cout<<"Hello";
     break;

     case 3:
     cout<<"Namste";
     break;
     case 4:
     cout<<"Good morning";
     break;
     default :
     cout<<"Incorrect choise: Please try again";
     break;
  }
 return 0;
}