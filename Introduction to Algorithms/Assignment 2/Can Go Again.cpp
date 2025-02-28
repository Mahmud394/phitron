/*
Problem Statement

You will be given N numbers of nodes,E  numbers of edges in a graph. For each edge you will be given A,B  and W  which means there is a connection from A to B only and for 
which you need to give W cost. The value of nodes could be from  1 to N.

You will be given a source node S. Then you will be given a test case T, for each test case you
will be given a destination node D. You need to tell the minimum cost from source node to destination. If there is no possible path from S to D then print Not Possible.

Note: If there is a negative weight cycle in the graph, then no answer would be correct. So 
print one line only - "Negative Cycle Detected".

Sample Input 0

5 7
1 2 10
1 3 -2
3 2 1
2 4 7
3 4 -3
4 5 5
2 5 2
1
5
1
2
3
4
5
Sample Output 0

0
-1
-2
-5
0
Sample Input 1

5 7
1 2 10
1 3 -2
3 2 1
2 4 7
3 4 -3
4 5 5
2 5 2
5
5
1
2
3
4
5
Sample Output 1

Not Possible
Not Possible
Not Possible
Not Possible
0
Sample Input 2

5 8
1 2 -2
1 3 -10
3 2 1
2 4 7
4 3 -3
4 5 5
2 5 2
4 1 1
1
5
1
2
3
4
5
Sample Output 2

Negative Cycle Detected
*/
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;  

int main() {
   long long  int n, e;
    cin >> n >> e;

   long long  int adj_mat[n + 1][n + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j)
                adj_mat[i][j] = 0;  
            else
                adj_mat[i][j] = INF;  
        }
    }

    while (e--) {
       long long  int u, v, w;
        cin >> u >> v >> w;
        adj_mat[u][v] = w;
    }

   long long  int source;
    cin >> source;
   long long  int dist[n + 1];
    fill(dist, dist + n + 1, INF);
    dist[source] = 0;

    for (int i = 1; i <= n - 1; i++) {
        for (int u = 1; u <= n; u++) {
            for (int v = 1; v <= n; v++) {
                if (adj_mat[u][v] != INF && dist[u] != INF && dist[u] + adj_mat[u][v] < dist[v]) {
                    dist[v] = dist[u] + adj_mat[u][v];
                }
            }
        }
    }

    for (int u = 1; u <= n; u++) {
        for (int v = 1; v <= n; v++) {
            if (adj_mat[u][v] != INF && dist[u] != INF && dist[u] + adj_mat[u][v] < dist[v]) {
                cout << "Negative Cycle Detected" << endl;
                return 0;
            }
        }
    }

   long long  int t;
    cin >> t;

    while (t--) {
       long long  int destination;
        cin >> destination;

        if (dist[destination] == INF) {
            cout << "Not Possible" << endl;
        } else {
            cout << dist[destination] << endl;
        }
    }

    return 0;
}
