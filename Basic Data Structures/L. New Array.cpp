#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    vector<int >v1(n);
    vector<int>v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    
    vector<int>v3;
     v3.insert(v3.begin(),v1.begin(),v1.end());
    v3.insert(v3.begin(),v2.begin(),v2.end());
    for(int i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<" ";
    }

    return 0;
}