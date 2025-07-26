#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v[3];
    for(int i=0;i<3;i++)
    {
        int n;
        cout<<"enter number of elements"<<endl;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int a;
            cin>>a;
            v[i].push_back(a);
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<"number of elements in vector"<<i+1<<"are"<<v[i].size()<<endl;
        for(int j=0;j<v[i].size();j++)
        {
          cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}