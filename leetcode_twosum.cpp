#include<iostream>
using namespace std;
int main()
{
    int nums[10];
    int target=0;
    int n,i,j;
    cout<<"enter no of elements in the array";
    cin>>n;
    cout<<"enter array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<"enter target"<<endl;
    cin>>target;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            cout<<i<<""<<j;
            break;
        }
    }
}