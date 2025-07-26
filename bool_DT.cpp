#include<iostream>
using namespace std;
int main()
{
    int x=10;
    float y=12.5;
    float z=true+x+false+y;
    cout<<z<<endl;
    cout<<sizeof(bool)<<endl;

    void *ptr;
    int x1=10;
    ptr=&x1;
    cout<<(int*)ptr<<endl;
}