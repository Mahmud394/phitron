/*
Problem Statement

You are given an array H representing the heights of N vertical lines positioned at equally spaced 
intervals along a two-dimensional plane. The i-th line's height is represented by the integer  Hi
where 0<=i<N and the height will be unique.

You need to find the two lines, such that together with the x-axis forms a container that can hold
 the most water in term of height.

Note: Print the left index first, then the right index.

Input Format

First line will contain T , the number of test cases.
First line of each test case will contain N.
Second line of each test case will contain the array H.

Constraints
1. 0<=T<=10^3
2. 2<=N<= 10^5
3. 0<=Hi<=10^9

Output Format

Ouptut two integers, the index of those two lines that can contain the most water in term of height.
Sample Input 0

2
9
1 8 3 4 0 7 6 5 2
5
5 2 1 6 3
Sample Output 0

1 5
0 3
Explanation 0

In the first test case, you can choose index 1 and 5 that can hold the most water in height which is 7.

*/

#include <bits/stdc++.h>
using namespace std;

pair<int, int> maxHeightContainer(const vector<int>& H) {
    int left = 0;
    int right = H.size() - 1;
    int max_height = 0;
    pair<int, int> result = {0, 0};

    while (left < right) {
        int current_height = min(H[left], H[right]);
        if (current_height > max_height) {
            max_height = current_height;
            result = {left, right};
        }
        if (H[left] < H[right]) {
            left++;
        } else {
            right--;
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> H(N);
        for (int i = 0; i < N; ++i) {
            cin >> H[i];
        }
        pair<int, int> result = maxHeightContainer(H);
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}