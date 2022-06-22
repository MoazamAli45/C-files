#include<iostream>
using namespace std;
int  reverse(int num){
	  int rev;
	while(num!=0){
		int digit=num%10;
		 rev=(rev*10)+digit;
		 num=num/10;
	}
	return rev;
}
int main(){
  int numb;
  cout<<"Enter Number to reverse : ";
  cin>>numb;
   cout<<endl;
  cout<<"The Reverse of Number is "<< reverse(numb);
}


