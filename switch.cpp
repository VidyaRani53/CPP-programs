#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char o;
    cout<<"enter 1st integer"<<endl;
    cin>>a;
    cout<<"enter 2nd integer"<<endl;
    cin>>b;
    cout<<"enter an operation"<<endl;
    cin>>o;
    switch(o)
    {
        case '+':cout<<"addition is:"<<a+b<<endl;
        break;
        case '-':cout<<"subtraction is:"<<a-b<<endl;
        break;
        case '*':cout<<"multiplication is:"<<a*b<<endl;
        break;
        case '/':cout<<"division is:"<<a/b<<endl;
        break;
        case '%':cout<<"modulus is:"<<a%b<<endl;
        break;
        default:cout<<"enter correct operation";
        break;

    }
}