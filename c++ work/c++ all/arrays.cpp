#include <iostream>
using namespace std;
int main(){
		int marks[4]={45,47,80,60};
		/*cout<<marks[0]<<endl;
		cout<<marks[1]<<endl;
		cout<<marks[2]<<endl;
//		you can change value of an array
         marks[3]=789;
		cout<<marks[3]<<endl;*/
//		Using For loop to print
//		for(int i=0;i<4;i++){
//			cout<<"THE MARKS ARE"<<i<<" is  "<<marks[i]<<endl;
		
//		 USING WHile loop
//        int i=0;
//	   while(i<4){
//       	cout<<"The marks of"<<i<<" is "<<marks[i]<<endl;
//       	i++;
//	   }
//       using do while loop
/*int i=0;
do{
	cout<<"The marks of"<<i<<" is "<<marks[i]<<endl;
	i++;
}while(i<4);
*/ 
        //     pointer and arrays
//   pointer arithmetic      address new=address cuurrent+i*size of datatype
//                        new adress (p+i)         current adress (p)

    int*p=marks;
//	cout<<"The marks are"<<*p<<endl;
//	cout<<"The marks are"<<*(p+1)<<endl;      // p store adress    *p give value at that point	
//	cout<<"The marks are"<<*(p+2)<<endl;	
//	cout<<"The marks are"<<*(p+3)<<endl;
      cout<<*(p++)<<endl;
      cout<<*(++p)<<endl;
	
		}
		
		

