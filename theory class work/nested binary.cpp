#include<iostream>
using namespace std;
int main(){
//	for   printing  binary from zero

/*	for(int i=1;i<=4;i++){
		for(int j=1;j<=i;j++){
			if((i+j)%2==0)
			cout<<"0";
		else{
			cout<<"1";
		}
		
	}
cout<<endl;
}

//	for   printing  binary from one
	for(int i=1;i<=4;i++){
		for(int j=1;j<=i;j++){
			if((i+j)%2==0)
			cout<<"1";
		else{
			cout<<"0";
		}
		
	}
cout<<endl;
}

//	for   printing  binary from one pyramid
	for(int i=1;i<=4;i++){
		for(int j=1;j<=2*i-1;j++){
			if((i+j)%2==0)
			cout<<"1";
		else{
			cout<<"0";
		}
		
	}
cout<<endl;
}
//	for   printing  binary from one  down pyramid
	for(int i=1;i<=4;i++){
		for(int j=7;j>=2*i-1;j--){
			if((i+j)%2==0)
			cout<<"0";
		else{
			cout<<"1";
		}
		
	}
cout<<endl;
}*/

for(int i=1;i<=4;i++){
	for(int j=7;j>=2*i-1;j--){
		if((j%2)==0){
			cout<<"0";
		}else{
			cout<<"1";
		}
		
	}
     cout<<endl;
}



}
