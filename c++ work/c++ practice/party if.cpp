#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age";
	cin>>age;
	if(age>18){
		cout<<"You can't come to party";
	}else if(age==18){
		cout<<"show your id card";
		
	}else{
		cout<<"You can come";
	}
	cout<<"\n This is children party";
	return 0;
}
