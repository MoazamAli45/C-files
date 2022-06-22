#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double i,j,k;
	cout<<"enter three floating point numbers:"<<endl;
	cin>>i>>j>>k;
	
	int sum;
	sum=static_cast<int>(i)+static_cast<int>(j)+static_cast<int>(k);
	cout<<setw(20)<<"Sum :"<<setw(25)<<sum;
	return 0;
	
}
