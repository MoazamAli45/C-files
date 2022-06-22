#include <iostream>
using namespace std;
int main()
{
	/*for(int i=0;i<=50;i++)
	{
		cout<<i<<endl;
		if(i==2){
			break;
		}
	}  */
	for(int i=0;i<=50;i++)
	{       
//	   this will miss 2 
		if(i==2){
			continue;
		}
		cout<<i<<endl;
		
	}
}
