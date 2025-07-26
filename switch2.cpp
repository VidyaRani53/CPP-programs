#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter choice";
    cin>>ch;
    switch(ch)
    {
        case 'p':cout<<"character is p";
        break;
        case 'A':cout<<"character is A";
        break;
        case 'a':cout<<"character is a";
        break;
        default:cout<<"enter valid choice";
        case 'j':cout<<"character is j";
        break;
    }
}
//enter b,A,p,j,a as choices