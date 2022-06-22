#include<iostream>
using namespace std;
/*
 enum day{mon,tues,wed,thurs,fri,sat,sun
 };
int main(){
	day day1,day2;
	day1=fri;
	day2=wed;
	int dif=day2-day1;
	cout<<"days between "<<dif<<endl;
	if(day1<day2)
	cout<<"day1 comes before";
	else
	cout<<"after";
}
*/
enum month{jan=0,feb,mar,april,may,june,jul,aug,sep,oct,nov=11,dece};

int main(){
//	month m1;
    month m5;
//	m1=jan;
    m5=dece;
    
    cout<<m5;
    cout<<"size : "<<sizeof(month)<<"bytes";
	/*
	 if(m1<m2)
	 cout<<"winter"	;
     
     else
      cout<<"nothing";
*/      }
