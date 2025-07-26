#include<iostream>
#include<utility>
using namespace std;
int main()
{
   // pair<int,float> p;
   auto p=make_pair(12,43.5);
   pair<int,float> p4(p);
    cout<<p4.first<<" "<<p4.second<<endl;
    return 0;
}