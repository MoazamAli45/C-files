#include <iostream>
using namespace std;
int main()
{
	int A,B;
	string name;
	cout<<"Enter your Roll no";
	cin>>A;
	cout<<"Enter Your Name ";
	cin.ignore();
	getline(cin,name);
	cout<<"Enter Your Id";
	cin>>B;
	
     cout<<"Your Name is "<<name<<endl;
	 cout<<"Your Roll no is "<<A<<endl;
	 cout<<"Your id is "<<B<<endl;
	 return 0;
	 	
}
