// Capacity
	

// v.size()
// Returns the size of the vector.
// O(1)
// v.max_size()
// Returns the maximum size that the vector can hold.
// O(1)
// v.capacity()
// Returns the current available capacity of the vector.
// O(1)
// v.clear()
// Clears the vector elements. Do not delete the memory, only clear the value.
// O(N)
// v.empty()
// Return true/false if the vector is empty or not.
// O(1)


// v.resize()
// Change the size of the vector.
// O(K); where K is the difference between new size and current size.




#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
   // cout<<v.capacity()<<endl;
    // cout<<v.max_size()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // cout<<v.size()<<endl;
    // v.clear();
    // cout<<v.size()<<endl;
    v.resize(2);
    v.resize(7,100);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}