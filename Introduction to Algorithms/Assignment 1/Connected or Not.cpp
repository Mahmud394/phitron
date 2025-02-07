/*
Problem Statement

You will be given a directed graph as input. Then you will receive Q queries. For each query, 
you will be given two nodes, A and B. You need to determine whether you can go from A to B 
directly without using any other nodes.
Sample Input 0

5 6
0 1
1 2
2 3
3 4
1 4
0 2
10
0 1
1 0
2 2
2 3
0 3
3 0
1 4
4 1
4 3
1 2
Sample Output 0

YES
NO
YES
YES
NO
NO
YES
NO
NO
YES
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];


int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin>>a>>b;
        adj_list[a].push_back(b); 
    }

    int k;
    cin >> k;
    while (k--)
    {
        int src, dst;
        cin >> src >> dst;
        if(src == dst){
            cout<<"YES"<<endl;
            continue;
        }
        bool directEdge = false;
        for (int child : adj_list[src])
        {
            if (child == dst)
            {
                directEdge = true;
                break;
            }
        }

        if (directEdge)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
