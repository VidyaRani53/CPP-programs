#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> v;
    v.push_back({12,34});
    v.push_back({1});
    v.push_back({-1,0,67});
    for(int i=0;v.size();i++)
    {
        for(auto it=v[i].begin();it!=v[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}