//Initialization

// vector<type>v;
// Construct a vector with 0 elements.
// O(1)
// vector<type>v(N);
// Construct a vector with N elements.
// O(N)
// vector<type>v(N,V);
// Construct a vector with N elements and the value will be V.
// O(N)
// vector<type>v(v2);
// Construct a vector by copying another vector v2.
// O(N)
// vector<type>v(A,A+N);
// Construct a vector by copying all elements from an array A of size N.
// O(N)




#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; type 1
    // vector<int> v(5); type 2
    // vector<int> v(5,10); type 3
    
    // vector<int> v2(5,100); type 4
    // vector<int> v(v2); type 4

    // int a[6]={1,2,3,4,5,6};
    // vector<int> v(a,a+6);  type 5
    vector<int> v={2,10,3};  // type 6
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    return 0;
}