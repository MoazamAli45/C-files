#include<iostream>
#include<iomanip>
using namespace std;
int main(){
/*	
	
	for(int i=1;i<=3;i++){
		for(int m=3;m>=i;m--)
		cout<<" ";
		for(int j=1;j<=2*i-1;j++){
		cout<<"*";
}
cout<<endl;
}
//  both logic can  be used

for(int k=2;k>=1;k--){
	for(int n=3;n>=k;n--)
	cout<<" ";
	for(int l=1;l<=2*k-1;l++)
	cout<<"*";
	
	for(int k=1;k<=2;k++){
	  for(int n=0;n<=k;n++)
	  cout<<" ";
	  for(int l=3;l>=2*k-1;l--)	
	 cout<<"*";
	 cout<<endl;
}

//             printing 543212345 pyramid
   for(int i=1;i<=5;i++){
   	 for(int j=5;j>=i;j--)
   	  cout<<" ";
   	 for(int k=i;k>=1;k--)
   	  cout<<k;
   	 for(int l=2;l<=i;l++)
   	 cout<<l;
   	cout<<endl;
   }*/
//   For Cross
cout<<"e";
int a;
cin>>a;
   for(int i=1;i<=a;i++){
   	for(int j=1;j<=a;j++){
   		if(j==i ||j==(a+1-i))
        cout<<"*";
        else
        cout<<" ";
	   }
	   cout<<endl;
   }

}
