/*
Problem Statement

Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appeard in the village before the start of the work, and now there are M2 additional farmers. Can you determine how many fewer days it will take for them to complete the task?

Note: If the answer is a floating value, take the integer part of the answer.

Input Format

First line will contain T, the number of test cases.
For each test case, input will contain three positive integers M1, M2 and D.
Constraints

1 <= T <= 1000
1 <= M1 <= 1000
0 <= M2 <= 1000
1 <= D <= 100
Output Format

Output how many fewer days it will take them to complete the work. Don't forget to put a new line after each test case.
Sample Input 0

4
10 5 15
4 0 5
4 1 5
7 1000 1
Sample Output 0

5
0
1
1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int total_farmer= m1+m2;
        double new_day=(m1*d)/total_farmer;
        int day=d-new_day;
        printf("%d\n",day);
        

    }
}
