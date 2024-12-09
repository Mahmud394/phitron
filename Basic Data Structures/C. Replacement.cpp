#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    vector<int >v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        
    }
      // Transform the vector using a lambda function
    transform(v.begin(), v.end(), v.begin(), [](int x) {
        if (x > 0) return 1;  // Replace positive numbers with 1
        if (x < 0) return 2;  // Replace negative numbers with 2
        return 0;             // Keep 0 as 0
    });

    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    
    
    /*
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            v[i]=0;
        }
        else if (v[i]>0)
        {
            v[i]= 1;
        }
        else if (v[i]<0)
        {
            v[i]=2;
        }
        cout<<v[i]<<" ";
    }
    */

    return 0;
}