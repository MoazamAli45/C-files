#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	int r,A,C;
//    string name;
	char name[15];
    cout<<"Enter your age:\n";
    cin>>r;
    cout<<"Your age is  "<<r<<"\n";
    cin.ignore();
	cout<<"Enter your name:\n";
//	getline(cin,name);
	cin.getline(name,15);
	cout<<"Your name is:"<<name<<endl;
//	string d;
	cout<<"Enter your ID:\n";
	cin>>A;
	cout<<"your id is "<<A;
}

