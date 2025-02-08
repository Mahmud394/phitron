/*
You are given an N*M sized 2D matrix that represents a map of a building. 
Each cell represents a wall or a room. The connected rooms are called apartments. 
Your task is to count the number rooms in each of the apartments in that building. 
You can walk left, right, up, and down through the room cells. You can't pass through walls.

You need to print the count of the rooms in ascending order. If there are no apartments 
available in that building, then you should print 0.
Output Format

Output the number of rooms in each of the apartments in ascending order.
Sample Input 0

5 8
########
#..#...#
####.#.#
#..#...#
########
Sample Output 0

2 2 8
Sample Input 1

6 8
.#.#####
.#.###..
#..#...#
#.##....
..##.###
#.#.##.#
Sample Output 1

1 1 2 8 10
*/
#include<bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;;

bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

void dfs(int si, int sj, int &room_count) {
    stack<pair<int, int>> stk;
    stk.push({si, sj});
    vis[si][sj] = true;

    while (!stk.empty()) {
        pair<int, int> cell = stk.top();
        stk.pop();
        int x = cell.first;
        int y = cell.second;
        room_count++;

        for (int i = 0; i < 4; i++) {
            int ci = x + d[i].first;
            int cj = y + d[i].second;

            if (valid(ci, cj)  && !vis[ci][cj] && grid[ci][cj] == '.') {
                vis[ci][cj] = true;
                stk.push({ci, cj});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    vector<int> room_counts;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                int room_count = 0;
                dfs(i, j, room_count);
                room_counts.push_back(room_count);
            }
        }
    }

    if (room_counts.empty()) {
        cout << "0" << endl;
    } else {
        sort(room_counts.begin(), room_counts.end());
        for (size_t i = 0; i < room_counts.size(); i++) { 
            if (i > 0) cout << " ";
            cout << room_counts[i];
        }
        cout << endl;
    }

    return 0;
}
