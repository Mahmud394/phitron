/*
You are given an integer N. Your task is to find the sum of all even numbers from 1 to N (inclusive).

Input Format

A single integer N.

Constraints

1≤N≤1000
Output Format

Print a single integer representing the sum of all even numbers from 1 to N.
Sample Input 0

10
Sample Output 0

30
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum+=i;

        }
    }
    printf("%d",sum);
}
