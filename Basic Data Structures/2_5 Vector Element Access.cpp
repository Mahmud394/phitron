/*
Element access

v[i]
Access the ith element.
O(1)

v.at(i)
Access the ith element.
O(1)

v.back()
Access the last element.
O(1)

v.front()
Access the first element.
O(1)

*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int>v={1,2,3,4,5};

    cout<<v[2]<<endl;

    //cout<<v.size()-1<<endl;
    cout<<v.back()<<endl;

    cout<<v[0]<<endl;
    //cout<<v.front()<<endl;

    return 0;
}