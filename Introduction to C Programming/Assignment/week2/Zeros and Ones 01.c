
/*
In this problem you will be given an integer N, followed by N numbers.

Each numbers will be either 0 or 1.

You need to print two integers, The first one will be the number of 0's and the second one will be the number of 1' s in the input.

Input Format

The first line will contain a single integer N.
The second line will contain N integers.
Constraints

1 <= N <= 100000
Each N numbers will be either 0 or 1.
Output Format

Print two space separated integers, total number of 0's and 1's.
Sample Input 0

10
0 0 1 0 1 0 0 0 1 1
Sample Output 0

6 4
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    int zero=0;
    int one =0;
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
        if(arr[i]==0)
        {
            zero++;
           
        }
        else if(arr[i]==1)
        {
            one++;
          
        }
    }
     printf("%d %d",zero,one);
    

}
