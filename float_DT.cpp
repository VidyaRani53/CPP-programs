#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
  float x=3456.123f;
  double a=9.123456789;
  long double aa=999.12345678l;
   cout<<cout.precision();
  cout<<"double a"<<a<<endl;
  cout<<"long double"<<aa<<endl;
  cout<<"float x="<<x<<endl;
  cout<<numeric_limits<long double>::digits10<<endl;
  return 0;
}