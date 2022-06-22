#include<iostream>
using namespace std;
int main()
{
	float a;
	cout<<"Enter your number:\n";
	cin>>a;
	if(a>100){
		cout<<"Banday da putar ban";
	}
	else if(a>=80 && a<=100){
		cout<<"congrats you got A+ grade in the exam";
	}
	else if(a>=60 && a<80){
		cout<<"congrat you got A grade in the exam";
	}
	else if(a>=45 && a<60){
		cout<<"you got B grade in the exam";
	}
	else{
		cout<<"Unfortunaitely,you are kicked out from this university";
	}
}
