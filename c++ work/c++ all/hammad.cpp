#include<iostream>
#include<cmath>
using namespace std;
int main(){
	/*
   int a,num2;
   int i;
   cout<<"Enter number";
   cin>>a;
    for( i=1;i<=a;i++){
   	for(int j=1;j<=i;j++){
   		cout<<i;
   		}
	 num2=pow(i,i);
     cout<<"="<<num2;
	 cout<<endl;  
   } */
/*
  int a;
  cout<<"Enter steps";
  cin>>a;
  
  for(int i=1;i<=a;i++)
 {
 	for(int j=a;j>=i;j--){
	 cout<<"*";
	 }
 	 
 	 cout<<endl;
	  }     
*/
/*
for(int i=1;i<=3;i++){
	for(int j=3;j>=i;j--)
	cout<<" ";
	for(int k=1;k<=2*i-1;k++)
	cout<<"*";
	cout<<endl;
}
for(int i=1;i<=2;i++){
	for(int j=0;j<=i;j++)
	cout<<" ";
	for(int k=3;k>=2*i-1;k--)
	cout<<"*";
	cout<<endl;
}
cout<<endl;*/

  int a;
  cout<<"Enter steps";
  cin>>a;
 
  
  for(int i=1;i<=a;i++){
  	for(int j=1;j<=a;j++){
	   if(i%2==0)
	  cout<"               ";  	
     else           
	 cout<<"*";

}
cout<<endl;
}
  }





