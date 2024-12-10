#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
    for(int i=0;i<q;i++)
    {
        int l=0,r=n-1;
        int value;
        int flag=0;
        cin>>value;
        while(l<=r)
        {
        int mid= (l+r)/2;
                if(a[mid]==value)
        {
            flag=1;
            break;
        }
        if(value>a[mid])
        {
            
            l=mid+1;
        }
        
        else 
        {
            
            r=mid-1;
        }
        }
        if(flag==1)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }


        

    }
    

    return 0;
}