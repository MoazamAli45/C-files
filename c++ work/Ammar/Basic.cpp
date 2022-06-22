#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	int r,A,C;
    string name;
	
    cout<<"Enter your age:\n";
    cin>>r;
    cout<<"Your age is  "<<r<<"\n";
    cin.ignore();
	cout<<"Enter your name:\n";
	getline(cin,name);

	cout<<"Your name is:"<<name<<endl;
	string d;
	cout<<"Enter your ID:\n";
	cin>>d;
	cout<<"your id is "<<d;
}

