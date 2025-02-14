/*
Problem Statement

You will be given a 2D matrix of size N*M which will contain only dot(.) and minus(-) where dot(.) 
means you can go in that cell and minus(-) means you can't.

You can move in only 4 directions (Up, Down, Left and Right).

The area of a component is the number of dots(.) in that component that can be accessible. 
You need to tell the minimum area of all available components.

Note: If there are no components, print -1.

Sample Input 0

6 5
..-..
..-..
-----
.-...
.----
.....
Sample Output 0

3
Sample Input 1

3 3
---
---
---
Sample Output 1

-1
*/

#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
int mi,cnt;
bool found = false;
bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}


void dfs(int si, int sj )  //O(V)  v= n*m
{
    vis[si][sj] = true;
    cnt ++;
    for(int i=0;i<4;i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
       
        if(valid(ci,cj) && !vis[ci][cj] &&  grid[ci][cj] == '.' )
            dfs(ci, cj);
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> grid[i][j];
    
    memset(vis,false,sizeof(vis));
    mi = INT_MAX;
       for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                cnt = 0;
                dfs(i, j);
                mi = min(mi, cnt);
                found = true;
            }
        }
    }
    if (!found)
        cout << -1 << endl;
    else
        cout << mi << endl;
    return 0;
}