/*
Problem Statement

You will be given an undirected graph as input. Then you will be given Q queries. 
For each query you will be given a node X. You need to print the nodes that are connected 
with X in descending order.

Note: If there is no node connected to , then print -1.

Output Format

Output the nodes that are connected with X in descending order.
Sample Input 0

6 8
0 4
0 5
4 2
4 3
5 3
2 0
0 1
1 3
6
0
1
2
3
4
5
Sample Output 0

5 4 2 1 
3 0 
4 0 
5 4 1 
3 2 0 
3 0 
Sample Input 1

5 3
0 1
1 2
0 4
2
3
0
Sample Output 1

-1
4 1 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    vector<int> adj_list[n];    
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);     
    }
     for (int i = 0; i < n; i++) {
        sort(adj_list[i].begin(), adj_list[i].end());
    }
    int k;
    cin>>k;
    while(k--){
        int c;
        cin>>c;
      if (adj_list[c].empty()) {  
            cout << -1; 
        }  
    vector<int> temp = adj_list[c]; 
        reverse(temp.begin(), temp.end());

        for (int x : temp)
            cout << x << " ";
        cout << endl;
    }
    
}