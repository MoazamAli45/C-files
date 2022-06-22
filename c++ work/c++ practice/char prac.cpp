#include <iostream>
using namespace std;
int main(){
	int age;
	string address;
     cout<<"Enter your age";
	 cin>>age;
	 if(age>=25){
		cout<<"YOU ARE NOT ELLIGIBLE";
		}else{
			cout<<"Enter your address \t";
			cin.ignore();
	getline(cin,address);		
	cout<<"your address is\n";
	cout<<address;
	
		}
	}
