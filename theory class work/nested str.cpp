#include<iostream>
#include<iomanip>
using namespace std;
/*struct date{
 	int day;
 	int month;
 	long year;
 };
struct phonebook{
	string name;
	long phone_number;
	date date_of_birth;
};
 
int main(){ 
   phonebook moazam;
    cout<<"Enter Your Name :";
    getline(cin,moazam.name);
    cout<<"Enter your phone Number :";
    cin>>moazam.phone_number;
    cout<<"Enter Your Date Of Birth(dd-mm-yy) :";
    cin>>moazam.date_of_birth.day>>moazam.date_of_birth.month>>moazam.date_of_birth.year;
      cout<<endl;
      cout<<"Size of structure was"<<sizeof(phonebook)<<endl;
      cout<<"User Name and Number: "<<setw(20)<<moazam.name<<setw(20)<<moazam.phone_number<<endl;
      cout<<"Date of birth(dd-mm-yy): "<<moazam.date_of_birth.day<<"-"<<moazam.date_of_birth.month<<"-"<<moazam.date_of_birth.year;
  */    
struct dist{
	int feet;
	int inches;
};
struct room{
	dist width;
	dist length;
};
int main(){
	room dinning={13,12};
/*	dinning.length.feet=12;
	dinning.length.inches=23;
	dinning.width.feet=25;
	dinning.width.inches=13;*/

   cout<<"dinning length : "<<dinning.length.feet<<"\t"<<dinning.length.inches<<endl;
   cout<<"dinning width : "<<dinning.width.feet<<"\t"<<dinning.width.inches<<endl;


}

