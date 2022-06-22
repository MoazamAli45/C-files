#include <iostream>
using namespace std;
int main(){
	int a,b=1;
	
	cout<<"enter your number";
	cin>>a;
	
	
	for(int i=1;i<=a;i++){
		
		b*=i;
	}
	cout<<"The factorial is"<<b;
	return 0;
}
