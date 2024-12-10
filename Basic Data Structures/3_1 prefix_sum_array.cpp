#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    long long n,q;
    cin>>n>>q;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
     for(int i=1;i<n;i++)
    {
        cout<<pre[i]<<" ";
    }

    while(q--)
    {
        long long l,r;
        cin>>l>>r;
        l--;
        r--;
        long long sum;
        if(l==0) sum=pre[r];
        else sum=pre[r]-pre[l-1];
        cout<<sum<<endl;
    }
    return 0;
    */

  long long int n,q;
    cin>>n>>q;
    vector<long long int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vector<long long int>pre(n+1);
    pre[1]=v[1];
    for(int i=2;i<=n;i++)
    {
        pre[i]=v[i]+pre[i-1];
    }
     for(int i=1;i<n;i++)
    {
        cout<<pre[i]<<" ";
    }


    while(q--)
    {
       long long  int l,r;
        long long int sum;
        cin>>l>>r;
        if(l==1)
        {
            sum= pre[r];
        }
        else{
            sum = pre[r]-pre[l-1];
        }
        cout<<sum<<endl;

    }


    return 0;
}