#include<iostream>
using namespace std;
//            Declaring structure for complex number
  struct complex{
  	int real;
  	int imaginary;
  	};
  	int main(){
  		int sum_real,sum_imaginary;
  		complex number1,number2;
  		char ch,sign_of_imag;
  		do{
		  cout<<"Enter Number 1 real and imaginary part :"<<endl;
//       Number1 (x+yi)
  		cout<<"\tEnter value of x: ";
  		cin>>number1.real;
  		cout<<"\tEnter value of y: ";
  		cin>>number1.imaginary;
//  		Number2 (x+yi)
  		cout<<"Enter Number 2 real and imaginary part :"<<endl;
  		cout<<"\tEnter value of x: ";
  		cin>>number2.real;
  		cout<<"\tEnter value of y: ";
  		cin>>number2.imaginary;
//  		Sum of Real Numbers
  		sum_real=number1.real+number2.real;
//  		Sum of Imaginary Numbers
        sum_imaginary=number1.imaginary+number2.imaginary;
//        Using Ternary operator for negative numbers
        sign_of_imag=(sum_imaginary>0)? '+':'-';
        sum_imaginary=(sum_imaginary>0)? sum_imaginary:-sum_imaginary;
//  		Showing Result
		cout<<"Sum of two Complex Number is: "<<sum_real<<sign_of_imag<<sum_imaginary<<"i"<<endl;
	    cout<<"Enter r to repeat: ";
	    cin>>ch;
	    cout<<endl;
	  }while(ch=='r');}


  



