/*
The Tetranacci sequence is an extension of the well-known Fibonacci sequence, incorporating four 
previous terms instead of two.

The Tetranacci sequence Tn is defined as follows:

T0 = 0, T1 = 1, T2 = 1,T3 = 2
For  n>=4, Tn = Tn-1 + Tn-2 + Tn-3 + Tn-4
Given an integer 𝑛, return the value of Tn

Note : You must solve this problem using Loop. (Bottom up)

Input Format

A single integer n representing the position in the Tetranacci sequence.

Output Format

Print a single integer, the value of Tn

Sample Input 0

4
Sample Output 0

4


Sample Input 1

5
Sample Output 1

8
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int fibo[n+1];
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;
    fibo[3] = 2;

    for(int i=4;i<=n;i++)  // O(N) 
    {
        fibo[i] = fibo[i-1] + fibo[i-2] + fibo[i-3] + fibo[i-4];
    }
    cout << fibo[n] << endl;
    return 0;
}

