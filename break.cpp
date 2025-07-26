#include<iostream>
using namespace std;
int main()
{
    int num=0,total=0;
    do
    {
        total=total+num;
        cout<<"enter a number";
        cin>>num;
        if(num<0)
        {
            break;
        }

    } while (1);
   cout<<total;
   return 0; 
}