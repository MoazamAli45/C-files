#include <iostream>
using namespace std;
int main(){
//	 for rectengle
/*	int n=5;
	for(int i=1;i<=5;i++){
		for(int j=;1j<=n;j++){
			cout<<"*";
		}
		cout<<endl;
	}
//	                   for  up triangle
	
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	} 
//	           for down triangle

	for(int i=1;i<=5;i++){
		for(int j=5;j>=i;j--){
			cout<<"*";
		}
		cout<<endl;
	}*/
//	           for right triangle
 for(int i=1;i<=5;i++){
      for(int j=5;j>=i;j--){
      	cout<<" ";
      	}
      for(int k=1;k<=i;k++){
      	cout<<"*";
	  }
	  cout<<endl;
 }
}
