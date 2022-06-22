#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int age;
	char adress[50];
	cout<<"\"Enter your original age:\\n\"\;";
	cin>>age;
	if(age>=25){
		cout<<"You are not elligible for this test.Please decrease your age.\\n";
	}
	else{
		cout<<"give more Informarion:\n";	
		cin.ignore();
	cout<<"Enter your permanent adress\n";
	cin.getline(adress,50);
	cout<<"Your adress is"<<endl<<adress;
	}
	
}
