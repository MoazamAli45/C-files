#include <iostream>
using namespace std;
int main(){
	/*string name;   //  without getline  it will not show all name
	cout<<"Enter Your Name"<<endl;
	getline(cin,name);                          // cin.getline(name,length);      for char syntax
	cout<<"Your Name is"<<name;         // getline(cin,name);             for string syntax
	*/
	
    char name[10];            // use cin.ignore();   before getline to work both int and string 
	cout<<"Enter Your Name";
	cin.getline(name,10);
	cout<<"Your Name is"<<name;
	
	return 0;
	
}
