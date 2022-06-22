#include <iostream>
using namespace std;
int main(){
	
	int a,i,b,c;
	cout<<"Enter Your number"<<endl;
	cin>>a;
	for(int i=2;i<a;i++){
		if(a%i==0){
		 cout<<"The number is composite";
		 goto a;
		}
	}
	 }
