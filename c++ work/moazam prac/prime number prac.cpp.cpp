#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
int n,e=0;
cout<<"enter the number ";
cin>>n;



for(int i=2;i<=n;i++)
{
	if(n%i==0)
	{
	  e++;	
	} 
}
if(e==1)
{
	cout<<"number is prime";
}
else 
cout<<"number is composite";
}



