#include<iostream>
using namespace std;
int main(){
int numb,digit,reverse=0,a;
cout<<"Enter a number to check pilandrome or not :";
cin>>numb;
a=numb;
while(numb!=0){
 digit=numb%10;
 reverse=(reverse*10)+digit;
 numb=numb/10;
 }
 cout<<reverse;
 if(a==reverse)
 cout<<"\tIt is Palindrome";
 else
 cout<<"\tIt is not Palindrome";
   return 0;
}

