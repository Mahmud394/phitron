/*
Problem Statement

Rezia is trapped in a 2D maze of N*M  size, starting at position R, and her goal is to reach 
the exit marked by D. The maze contains blocks represented by #, and she can only traverse 
through cells marked with dots (.). As she need to escape as early as possible, we need to 
determine the path she will follow. 

Place an X in each cell representing Rezia's route to exit the maze. If there is no viable path 
for her to exit, leave the maze unchanged.

Note: Rezia can move in four directions – right, left, up, and down. It is crucial to adhere to 
the specified order: attempting right first, then left, followed by up, and finally down.
Output Format

Output the final maze with marked X indicating the path she will follow.
Sample Input 0

5 6
...D.#
.##..#
....#.
.R#...
.#.##.
Sample Output 0

...D.#
.##X.#
.XXX#.
.R#...
.#.##.
Sample Input 1

5 6
...D.#
.R...#
....#.
..#...
.#.##.
Sample Output 1

...D.#
.RXX.#
....#.
..#...
.#.##.
Sample Input 2

5 6
...D.#
.....#
.##.#.
.R#...
.#.##.
Sample Output 2

...D.#
XXXX.#
X##.#.
XR#...
.#.##.
Sample Input 3

5 6
...D.#
.....#
###.#.
.R#...
.#.##.
Sample Output 3

...D.#
.....#
###.#.
.R#...
.#.##.
*/

#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; 
int n, m;

bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[si][sj] = {-1, -1};

    int exitX = -1, exitY = -1;

    while (!q.empty()) {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        if (grid[par_i][par_j] == 'D') {
            exitX = par_i;
            exitY = par_j;
            break;
        }

        for(int i = 0; i < 4; i++) {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;

            if (valid(ci, cj) && (grid[ci][cj] == '.' || grid[ci][cj] == 'D') && !vis[ci][cj]) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {par_i, par_j}; 
            }
        }
    }

    if (exitX == -1) 
        return; 

    int x = exitX, y = exitY;
    while (parent[x][y] != make_pair(-1, -1)) { 
        if (grid[x][y] != 'D')
            grid[x][y] = 'X'; 
        
        tie(x, y) = parent[x][y];
    }
}

int main() {
    cin >> n >> m;
    int si = -1, sj = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'R') {
                si = i;
                sj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    bfs(si, sj);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
