#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    //without vactor size
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    for(string val: v)
    {
        cout<<val<<endl;
    }
    */

// with vector size N
   int n;
   cin>>n;
   cin.ignore();
   vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        getline(cin,v[i]);
       // cin>>v[i];
    }
    for(string s : v)
    {
        cout<<s<<endl;
    }
}