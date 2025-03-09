/*
The Tetranacci sequence is an extension of the well-known Fibonacci sequence, incorporating four 
previous terms instead of two.

The Tetranacci sequence Tn is defined as follows:

T0 = 0, T1 = 1, T2 = 1,T3 = 2
For  n>=4, Tn = Tn-1 + Tn-2 + Tn-3 + Tn-4
Given an integer 𝑛, return the value of Tn

Note : You must solve this problem using Recursion. (Top Down)

Input Format

A single integer n representing the position in the Tetranacci sequence.

Output Format

Print a single integer, the value of Tn

Sample Input 0

4
Sample Output 0

4
Explanation 0

image

Sample Input 1

5
Sample Output 1

8
*/

#include<bits/stdc++.h>
using namespace std;      // O(N)

long long int dp[1005];
int fibo(long long int n)
{
     if (n == 0) 
         return 0;
    if (n == 1 || n == 2)
        return 1;
    if (n == 3) 
        return 2;
    dp[n] = fibo(n-1) + fibo(n-2)+ fibo(n-3) + fibo(n-4); 
    return dp[n];
}

int main()
{
    memset(dp,-1,sizeof(dp));
    long long int n;
    cin >> n;
    cout << fibo(n);
    return 0;
}