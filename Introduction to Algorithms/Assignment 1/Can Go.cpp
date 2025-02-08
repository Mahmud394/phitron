/*
Problem Statement

You are given an N*M sized 2D matrix that represents a map of a building. Each cell represents
a wall, a floor or a room. You will be given two rooms A and B. You need to tell if 
you can go from room A to B  by passing through the floors. You can walk left, right, up, 
and down through the floor cells. You can't pass through walls.

Output Format

Output YES if you can go from room  to , NO otherwise.
Sample Input 0

5 8
########
#.A#...#
#.##.#B#
#......#
########
Sample Output 0

YES
*/
#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;

bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for(int i=0;i<4;i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
           if (valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'B' || grid[ci][cj] == 'A')  ) 
               
            {
                q.push({ci,cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si,sj,di,dj;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> grid[i][j];
            if(grid[i][j]=='A')
            {
                si=i;
                sj=j;
            }
            if(grid[i][j]=='B')
            {
                di=i;
                dj=j;
            }
        }
    }

   
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    bfs(si,sj);
    if(level[di][dj]!=-1 )
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}