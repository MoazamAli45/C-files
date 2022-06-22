#include<iostream>
using namespace std;
int main(){
	int a,b;
	int d=1;
	cin>>a>>b;
	for(int i=1;i<=b;i++){
		d=a*d;
	}
	cout<<d;
}
