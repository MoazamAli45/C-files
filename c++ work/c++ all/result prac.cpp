#include<iostream>
using  namespace std;
int main(){
	int number;
	cout<<"Enter your number";
	cin>>number;
	if((number<50)&&(number>40)){
		cout<<"you are pass";
		}
		else if((number>50)&&(number<80)){
			cout<<"Satisfactory";
			
		}
		else if(number<40){
			cout<<"You are fail";
			
		}
		else{
			cout<<"Excellent Keep it up";
			
		}
		cout<<" \nThis is your result";
}
