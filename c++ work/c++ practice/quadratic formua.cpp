#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,p,d;
	cout<<"Enter value of a ";
	cin>>a;
	cout<<"Enter value of b ";
	cin>>b;
	cout<<"Enter value of c ";
	cin>>c;
	d=(-b+sqrt(b*b-4*a*c))/2*a;
	p=(-b-sqrt(b*b-4*a*c))/2*a;
	
	cout<<"The answer is ("<<d<<"+ 0)"<<"or ("<<p<<"+ 0)"<<endl;
	return 0;

	
	
	
	
	
   }
