#include <iostream>
using namespace std;
int main(){
  float a,c;
  cout<<"Enter temp in farenheit"; // conversion of temperature from farenheit to celcius
  cin>>a;
  c=5*(a-32)/9;
  cout<<"Temp in celcius"<<c;
  return 0;
}
