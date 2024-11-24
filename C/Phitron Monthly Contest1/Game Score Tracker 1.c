/*
You are given the results of several games played by a team. Each game has a specific score that the team achieved, and your task is to analyze the team's performance based on these scores.

For each game, you will receive an integer score. If the score is greater than the previous maximum score, it means the team has broken its “highest score” record, and you should count that. Similarly, if the score is less than the previous minimum score, it means the team has broken its “lowest score” record, and you should count that as well.

Let Scores are: [10 5 20 20 4 5 2 25 1] The team broke the highest score record 2 times: after scores 20 and 25. The team broke the lowest score record 4 times: after scores 5, 4, 2, and 1. So, output will be: 2 4

Your task is to print the total number of times the team broke its highest and lowest score records.

Input Format

The first line contains an integer N, the number of games played.
The second line contains N space-separated integers representing the scores in each game.
Constraints

1≤N≤1000
0≤Score≤100000
Output Format

Print two integers separated by a space: the total number of times the team broke its highest score record and the total number of times it broke its lowest score record.
Sample Input 0

9
10 5 20 20 4 5 2 25 1
Sample Output 0

2 4
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    int c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    int m=arr[0],mi=arr[0];
      for(int i = 1; i < n; i++) {
        
        if (arr[i] > m) {
            m = arr[i];
            c2++;  
        }
        
        else if (arr[i] < mi) {
            mi = arr[i];
            c1++;  
        }
    }
    printf("%d %d",c2,c1);
    
}
