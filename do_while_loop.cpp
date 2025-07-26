#include<iostream>
using namespace std;
int main()
{ 
    char choice;
    do{
        int a,b,sum=0,sub=0,mul=0,div=0;
         cout<<"************************"<<endl;
         cout<<"1.addition"<<endl;
         cout<<"2.subtraction"<<endl;
         cout<<"3.multiplication"<<endl;
         cout<<"4.Division"<<endl;
         cout<<"Q.quit"<<endl;
         cout<<"enter your choice";
         cin>>choice;
         switch(choice)
         {
            case '1':cout<<"you choose addition"<<endl;
            cout<<"enter two numbers seperated by a space";
            cin>>a>>b;
            sum=a+b;
            cout<<"addition is:"<<sum<<endl;
            break;
            case '2':cout<<"you choose subtraction"<<endl;
            cout<<"enter two numbers seperated by a space";
            cin>>a>>b;
            sub=a-b;
            cout<<"subtraction is:"<<sub<<endl;
            break;
            case '3':cout<<"you choose multiplication"<<endl;
            cout<<"enter two numbers seperated by a space";
            cin>>a>>b;
            mul=a*b;
            cout<<"multiplication is:"<<mul<<endl;
            break;
            case '4':cout<<"you choose division"<<endl;
            cout<<"enter two numbers seperated by a space";
            cin>>a>>b;
            div=a/b;
            cout<<"division is:"<<div<<endl;
            break;
            case 'Q':cout<<"good byee"<<endl;
            break;
            default:cout<<"enter correct choice"<<endl;
            break;
         }
    }while(choice!='Q');
    return 0;
}