#include <iostream>
using namespace std;
int main()
{
	int a=3;
	int *b;
	b=&a;
//	& ----    adress of operator
cout<<"the adress of a  "<<b<<endl;
// *---- (value at)    dereference operator
 cout<<"the value of a "<<*b<<endl;
      
	  
//	  pointer to pointer
int**c;
c=&b;
cout<<"the address  of b "<<c<<endl;
cout<<"the value at address c   "<<*c<<endl;
cout<<"the value at address value at (value at (c))"<<**c<<endl; 
	  
	  
	  return 0;
}
