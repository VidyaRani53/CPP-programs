#include<iostream>
using namespace std;
int main()
{
    int money;
    cout<<"how much you have?";
    cin>>money;
    if(money>=1000)
    {
        cout<<"money i have "<<money<<endl;
        cout<<"lets have coffee in starbucks"<<endl;
    }
    else if(money>7000)
    {
       cout<<"money i have "<<money<<endl;
        cout<<"lets have coffee in CCD"<<endl; 
    }
    else if(money>500)
    {
       cout<<"money i have "<<money<<endl;
        cout<<"lets have coffee in normal shop "<<endl; 
    }
    else if(money>100)
    {
       cout<<"money i have "<<money<<endl;
        cout<<"lets have sacets and make coffee at home"<<endl; 
    }
    else{
        cout<<"let have tea";
    }
    cout<<"lets go home";
    return 0;
}