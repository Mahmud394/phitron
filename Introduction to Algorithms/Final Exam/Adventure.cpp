/*
Problem Statement

Once upon a time, there was a treasure hunter who ventured into an ancient temple in search of a 
valuable artifact. The temple was filled with traps and obstacles, and the treasure hunter had to 
carry all of his equipment with him.

The treasure hunter had a backpack with a limited weight capacity, and he could only carry a 
certain amount of equipment with him. Each piece of equipment had its own weight and value, and 
the treasure hunter needed to choose which items to bring to maximize the total value while 
keeping the total weight under the limit.

Help the treasure hunter to choose which items to bring in his backpack to maximize their total 
value while keeping the total weight of his backpack under a certain limit. Each item can only be 
included once.

Input Format

First line will contain T, the number of test cases.
The first line of each test case will contain N(Number of items) and W(Total weight of backpack).
Second line of each test case will contain an array w containing the weights of all items.
Third line of each test case will contain an array v containting the values of all items.

Output Format

Output the maximum total value you can obtain in the backpack for each test case.
Sample Input 0

2
4 7
2 3 4 5
4 7 6 5
4 17
10 1 6 9
6 10 10 8
Sample Output 0

13
28
Explanation 0

In the first test case case, he can take 2nd and 3rd item which total weight is 3+4=7 and total 
value is 7+6=13 and its the maximum value possible.
*/


#include <bits/stdc++.h>
using namespace std;

int val[1005], weight[1005], dp[1005][1005];

int knapsack(int i, int mx_weight) {  // O(NW)
    if (i < 0 || mx_weight <= 0)
        return 0;
    
    if (dp[i][mx_weight] != -1)
        return dp[i][mx_weight];

    if (weight[i] <= mx_weight) {
        int op1 = knapsack(i - 1, mx_weight - weight[i]) + val[i]; 
        int op2 = knapsack(i - 1, mx_weight);  
        dp[i][mx_weight] = max(op1, op2);
    } else {
        dp[i][mx_weight] = knapsack(i - 1, mx_weight);
    }
    
    return dp[i][mx_weight];
}

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int n, mx_weight;
        cin >> n >> mx_weight;

        for (int i = 0; i < n; i++)
            cin >> weight[i];  
        for (int i = 0; i < n; i++)
            cin >> val[i];  

      
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= mx_weight; j++)
                dp[i][j] = -1;

        cout << knapsack(n - 1, mx_weight) << endl;  
    }

    return 0;
}