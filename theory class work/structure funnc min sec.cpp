#include<iostream>
using namespace std;
/*struct time{
	int hour;
	int min;
	int sec;
};
int tosec(time now);
int main(){
   time t;
   t.hour=5;
   t.min=30;
   t.sec=45;
   cout<<"The time in seconds "<<tosec(t);
   }
int tosec(time now){
	int c=3600*now.hour+60*now.min+now.sec;
	return c;
}*/
struct style{
   string name;
   float price;	
};
void man(style boot ){
	cout<<"The Name of Shoe is "<<boot.name<<" Price is "<<boot.price;
	
	
}
int main(){
	style shoe;
	cout<<"Enter Your Choice : ";
	cin>>shoe.name;
	cout<<"Enter Price ";
	cin>>shoe.price;
	man(shoe);
	
	cout<<"Enter Your Choice : ";
	cin>>shoe.name;
	cout<<"Enter Price ";
	cin>>shoe.price;
	man(shoe);
	
}
