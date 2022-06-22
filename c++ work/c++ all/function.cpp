# include<iostream>
using namespace std;
//  function in c++
/*
int sum(int a,int b){
	int c=a+b;
	return c;
}

int main(){
    int num1,num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;  
    cout<<"Sum is "<<sum(num1,num2);
    
	return 0;
	}	*/
//	            function prototyping (function was after the main function)

// type-function_name(arguments)       (syntax)

int sum(int a,int b);      // acceptable
//int sum(int a,b);          not acceptable
//int sum (int,int);       acceptable
void g(void);    // void g()   also acceptable
int main(){
    int num1,num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;  
//     num1 and num 2 (actual parameter)
    cout<<"Sum is "<<sum(num1,num2);
    g();
	return 0;

}
int sum(int a,int b){
//  formal parameter a and b will be taking   values  from actual parameters num1 and num2 
    int c=a+b;
	return c;
}

void g(){
	cout<<endl<<" Hello Good, Morning";
}




