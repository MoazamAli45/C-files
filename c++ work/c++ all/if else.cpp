#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age";
    cin>>age;
   /* if((age<18)&&(age>1)){
	
    	cout<<"you can't come to party"<<endl;
    	}
    	else if(age==18){
    		cout<<"You are not allowed"<<endl;
		}
		else if(age<1){
		         cout<<"you are a baby"<<endl;
		}
		else{
			cout<<"You can come to party"<<endl;
		}
   switch case */
   
   switch(age){
   	case 18:
   	cout<<"you are 18";
   	break;
   	
   	case 22:
   	cout<<"you are 22";
   	break;
   	
   	default:
   		cout<<"no special cases"<<endl;
   		break;
   		
   	 } 
   	 
   cout<<"Done with Switch cases";
   return 0;
   
   
   
   
   
	
	
	
}
