#include<iostream>
using namespace std;
int main()
{
	int a,i,b,s;
cout<<"Please enter a number: \n";
cin>>a;
for(i=2;i<a;i++){
	if(a%i==0){
		cout<<"The given number is composite \n";
		goto a;
		
	}
}	
	cout<<"The given number is Prime";
	a:
	return 0;
	
	
	
}

