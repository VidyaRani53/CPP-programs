#include<iostream>
using namespace std;
int main()
{
    int money;
    cout<<"how much you have"<<endl;
    cin>>money;
    if(money>=1000)
    {
        cout<<"i have : "<<money;
        cout<<"coffee in starbucks ";
    }
    else
    {
        cout<<"ihave money : "<<money;
        cout<<"coffee in ccd ";
    }
    cout<<"lets go home";
    return 0;
}