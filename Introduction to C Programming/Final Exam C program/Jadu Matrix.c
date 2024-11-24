/*
Problem Statement

You will be given a matrix of size N * M. You need to tell if it is Jadu Matrix or not.

Note: A Jadu Matrix is a square matrix, where the values of primary diagonal and secondary diagonal are 1. Rest of the cell will contain only 0.

Input Format

First line will contain N, the row and M, the column of the matrix.
Then the N * M sized matrix will be given.
Constraints

1 <= N, M <= 100
0 <= Values <= 100
Output Format

Ouput "YES" if the matrix is Jadu Matrix, otherwise output "NO" without the quotation marks.
Sample Input 0

5 5
1 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1
Sample Output 0

YES
Sample Input 1

5 5
1 0 0 0 1
0 1 0 1 0
0 0 0 0 0
0 1 0 1 0
1 0 0 0 1
Sample Output 1

NO
Sample Input 2

5 5
1 0 0 0 1
0 1 0 1 0
0 0 1 0 1
0 1 0 1 0
1 0 0 0 1
Sample Output 2

NO
Sample Input 3

5 5
2 0 0 0 1
0 1 0 1 0
0 0 1 0 0
0 1 0 1 0
1 0 0 0 1
Sample Output 3

NO
Sample Input 4

6 6
1 0 0 0 0 1 
0 1 0 0 1 0 
0 0 1 1 0 0 
0 0 1 1 0 0 
0 1 0 0 1 0 
1 0 0 0 0 1 
Sample Output 4

YES
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m;
    scanf("%d %d",&n,&m);
    if(n!=m)
    {
        printf("NO");

    }
    else if(n==m){
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int  j=0;j<m;j++)
        {
            scanf("%d",&matrix[i][j]);

        }
        

    }
        int matrix_jadu=1;
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
             if (i == j || i + j == n - 1) // secondary diagonal i+j==n-1
             {
                if (matrix[i][j] != 1) {
                    matrix_jadu = 0;
                }
                  } else {
                if (matrix[i][j] != 0) {
                    matrix_jadu = 0;
                }
            }
              
        }

    }
        
      if(matrix_jadu)
               {
                   printf("YES");

               }
        else 
        {
            printf("NO");

        }
    
    } 
}
