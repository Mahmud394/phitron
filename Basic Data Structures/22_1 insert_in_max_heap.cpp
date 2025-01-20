// par_idx * 2+1 = left_idx
// par_idx * 2+2 = right_idx
// (child_idx - 1)/2 = par_idx

#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int val;
    cin>>val;
    v.push_back(val);
    int cur_idx = v.size()-1;
    while (cur_idx != 0)   //for one->O(log N)    for more-> O(NlogN)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
    

    for (int x : v)
        cout << x << " ";
    return 0;
}