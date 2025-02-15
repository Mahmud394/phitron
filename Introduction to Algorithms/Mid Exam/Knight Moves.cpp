/*
Problem Statement

You will be given a chessboard of N*M  size. You can move anywhere in the chessboard freely. You will be given two cells - the knight's cell K ( Ki and Kj), and the queen's cell Q (Qi and Qj ). You need to tell the minimum number of steps for the knight to attack the queen if the queen doesn't move.
Output Format

Output the minimum number of steps for the knight to reach the queen. If you can't reach to queen, print .
Sample Input 0

4
8 8
0 0
7 7
5 6
0 1
0 1
4 4
0 0
0 1
2 2
0 0
0 1
Sample Output 0

6
0
3
-1
*/
#include <bits/stdc++.h>
using namespace std;

int N, M;  
int knight_x, knight_y, queen_x, queen_y; 

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

bool isValid(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < M);
}

int bfs() {
    queue<pair<int, int>> q;
    vector<vector<int>> dist(N, vector<int>(M, -1));  

    q.push({knight_x, knight_y});
    dist[knight_x][knight_y] = 0;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (x == queen_x && y == queen_y) {
            return dist[x][y];
        }

        for (int i = 0; i < 8; i++) {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if (isValid(new_x, new_y) && dist[new_x][new_y] == -1) {
                dist[new_x][new_y] = dist[x][y] + 1;
                q.push({new_x, new_y});
            }
        }
    }

    return -1;
}

int main() {
    int t;
    cin >> t;  

    while (t--) {
        cin >> N >> M;  
        cin >> knight_x >> knight_y;  
        cin >> queen_x >> queen_y; 

        cout << bfs() << endl;
    }

    return 0;
}
