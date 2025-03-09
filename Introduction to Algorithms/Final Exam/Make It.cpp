/*
Problem Statement

You will be given a positive integer N. You will start from 1 and do some steps (possibly zero).

In each step you can choose one of the following:

Add 3 with the current value
Multiply by 2 with the current value
Can you tell if you can reach N by using any number of steps you want.

Input Format

First line will contain T, the number of test cases.
In each test case you will be given N.

Output Format

Print "YES" if you can reach N, "NO" otherwise.
Sample Input 0

5
1
3
5
15
16
Sample Output 0

YES
NO
YES
NO
YES
*/

#include <bits/stdc++.h>
using namespace std;
bool makeIt(int n) {
    if (n == 1) 
        return true; 

    vector<bool> dp(n + 1, false);
    dp[1] = true;

    for (int i = 1; i <= n; i++) {
        if (dp[i]) {  
            if (i + 3 <= n) {
                dp[i + 3] = true;
            }
            if (i * 2 <= n) {
                dp[i * 2] = true;
            }
        }
    }

    return dp[n];
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        if (makeIt(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}