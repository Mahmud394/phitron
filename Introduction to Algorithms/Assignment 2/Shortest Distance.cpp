/*
Problem Statement

You'll be given a graph of N nodes and E edges. For each edge, you'll be given A, B and W which means 
there is an edge from A to B only and which will cost W.

Also, you'll be given Q queries, for each query you'll be given A and B, where X is the source and Y  is 
the destination. You need to print the minimum cost from X to Y for each query. If there is no 
connection between X and Y, print -1.

Note: There can be multiple edges from one node to another. Make sure you handle this one.

Sample Input 0

4 7
1 2 10
2 3 5
3 4 2
4 2 3
3 1 7
2 1 1
1 4 4
6
1 2
4 1
3 1
1 4
2 4
4 2
Sample Output 0

7
4
6
4
5
3
Sample Input 1

4 4
1 2 4
2 3 4
3 1 2
1 2 10
6
1 2
2 1
1 3
3 1
2 3
3 2
Sample Output 1

4
6
8
2
4
6
*/
#include <bits/stdc++.h>
using namespace std;

const long long INF = LLONG_MAX; 

int main() {
    int n, e, q;
    cin >> n >> e;

    long long adj_mat[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) adj_mat[i][j] = 0;  
            else adj_mat[i][j] = INF;  
        }
    }

    for (int i = 0; i < e; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        a--; b--; 
        adj_mat[a][b] = min(adj_mat[a][b], (long long)w);
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj_mat[i][k] != INF && adj_mat[k][j] != INF) {
                    adj_mat[i][j] = min(adj_mat[i][j], adj_mat[i][k] + adj_mat[k][j]);
                }
            }
        }
    }

    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        x--; y--; 
        if (adj_mat[x][y] == INF) {
            cout << -1 << endl;
        } else {
            cout << adj_mat[x][y] << endl;
        }
    }

    return 0;
}
