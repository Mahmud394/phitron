/*
Modifiers

v= or v.assign()
Assign another vector.
O(N) if sizes are different, O(1) otherwise.

v.push_back()
Add an element to the end.
O(1)

v.pop_back()
Remove the last element.
O(1)

v.insert()
Insert elements at a specific position.
O(N+K); where K is the number of elements to be inserted.

v.erase()
Delete elements from a specific position.
O(N+K); where K is the number of elements to be deleted.


replace(v.begin(),v.end(),value,replace_value)
Replace all the value with replace_value. Not under a vector.
O(N)

find(v.begin(),v.end(),V)
Find the value V. Not under a vector.
O(N)


*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v={1,2,3};  v= or v.assign()
    // v=x; // O(N)
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }



    // vector<int> x={10,20,30,40};
    // x.pop_back();
    // x.pop_back();
    // for(int i=0;i<x.size();i++)
    // {
    //     cout<<x[i]<<" ";
    // }


    //   vector<int>v={1,2,3,4,5};
    //   v.insert(v.begin()+2,100);
    //    for(int x: v)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // vector<int>v2={100,101,102,103};
    // v.insert(v.begin()+3,v2.begin(),v2.end());  //insert(pos,element)
    // for(int x: v)
    // {
    //     cout<<x<<" ";
    // }
    

    vector<int>v={1,2,3,4,5};
    // v.erase(v.begin()+3);
    // v.erase(v.begin()+1,v.begin()+4);
    v.erase(v.begin()+1,v.end()-1);
    for(int x:v)
    {
        cout<<x<<" ";
    }

    return 0;
}