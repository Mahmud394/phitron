/*
Dijkstra Algoritm
	-Single source shortest distance/path=sssp
    -cycle working
    - nagetive weight working 
    - nagetive weight cycle not working
implement - naive Approach
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    vector<pair<int,int>> adj_list[n];
    while(e--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }
    for(int i=0;i<n;i++)
    {
        cout << i << " -> ";
        for(auto p : adj_list[i])
            cout << p.first << " " << p.second << ", ";
        cout << endl;
    }
    return 0;
}