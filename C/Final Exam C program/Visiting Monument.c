/*
Babul had recently visited the National Martyrs' Monument. He was observing the shape of the monument. He saw that the hight increases from one side and then decreases.

He got interested with that. He now is playing with numbers, He will take a number N and write the numbers from 1 to N in increasing order and then again to 1 in decreasing order.

For example for N = 3 he will write, 1 2 3 2 1.

Now you will be given a number N, and you have to print the numbers he will write.

Input Format

The input will contain an Integer T, the number of test cases.
Each test cases will contain an integer N.
Constraints

1 <= T <= 10
1 <= N <= 1000
Output Format

For each case print the numbers that babul will write.

Sample Input 0

2
3
4
Sample Output 0

1 2 3 2 1
1 2 3 4 3 2 1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
           printf("%d ",i);

        }
        for(int j=n-1;j>=1;j--){
            printf("%d ",j);
           }
        printf("\n");

    }
}
