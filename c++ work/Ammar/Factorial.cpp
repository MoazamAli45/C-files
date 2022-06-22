#include<iostream>
using namespace std;
int main()
{ //factorial

	/*int k,n=1;
	cout<<"Enter a number to find factorial:\n";
	cin>>k;
	for(int i=1;i<=k;i++){
		n*=i;
	}
	cout<<"Factorial is:"<<n; */
	//addition
	/*int k,n=0;
	cout<<"Enter a number to find factorial:\n";
	cin>>k;
	for(int i=0;i<=k;i++){
		n+=i;*/
		
		
		//Even and odd
		
		/*int a,b;
		cout<<"enter a number:\n";
		cin>>a;
		if(a%2==0){
			cout<<"the given number is even\n";
		}
		else{
			cout<<"the given number is odd";
		}*/
		
		
		//Prime and composite number
		
		int a,b,i;
		cout<<"Enter a number\n";
		cin>>a;
		for(i=2;i<a;i++){
			if(a%i==0){
				cout<<"The given number is composite";
				goto a;
			}	
		}
		cout<<"The given number is prime";
		a:
			return 0;      
		
		//The sum of prime number from a number to another number
		
		/*int a,b,j,i,n=0;
		cout<<"Enter the lower number:\n";
		cin>>a;
		cout<<"Enter the larger number:\n";
		cin>>b;
		for(i=a;i<=b;i++){
			for(j=2;j<i;j++){
				if(i%j==0){
					break;
				}
			}
			if(j==i){
				n=n+i;
			}
		}
		cout<<"The sum of prime number from "<<a<<" to "<<b<<" is "<<n;*/
		
		
		//Another method of Identifying prime and composite number
		
		/*	int a,b,i;
		cout<<"Enter a number\n";
		cin>>a;
		for(i=2;i<a;i++){
			if(a%i==0){
				cout<<"The given number is composite";
				break;
					}	
			else if(i==a-1){
				cout<<"The given number is prime";	
			}		
		}
		cout<<"one is composite";
			return 0;     */
			
			
		//	Another method of finding factorial
		
		/*	int a ,n=1,i;
			cout<<"Please enter a number:\n";
			cin>>a;
			for(i=a;i>1;i-=1){
				n=n*i;				
			}
			cout<<"your output is "<<n;   */
			
		/*	int i,k,n;
			cout<<"Enter a number:\n";
			cin>>n;
			for(i=n;i>0;i--){
				cout<<i;
			}    */
			
			
			//converting fahrenheit into celcius
			
		/*	float f,c,d;
			cout<<"Enter temperature in farenheight:\n";
			cin>>f;
			
			c=5*(f-32)/9;
			cout<<"The temperature in celcius is "<<c<<"\n";   */
			
			
		/*	int a,b;
			a=(2/5)*6;
			cout<<"the output is "<<a;   */
			
		/*	int i,a=1;
			
			for(i=1;i<=10;i++){
				for(int j=1;j<=10;j++){
				cout<<a++<<"\t";	
				}
				
				cout<<"\n";    */
				
		/*		int i,a=1;
			
			for(i=1;i<=10;i++){
				for(int j=i;j<i+10;j++){
				cout<<a++<<"\t";	
				}
				
				cout<<"\n";   */
				
		/*	int a,b,n;
			cout<<"Please enter a number:\n";
			cin>>n;
			for(a=1;a<n;a++){
			cout<<a;	
			}        */
			
	/*		int a,b,n;
			cout<<"Please enter a number:\n";
			cin>>n;
			for(a=n;a>0;a--){
			cout<<a;	
			}        */
			
			
		}
			
						

	
	
