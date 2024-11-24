/*
Problem Statement

You will be given a positive integer N, you need to print a pattern shown below using this N.

For example: If N=5, the pattern will look like below.

image

See the sample test cases for more clarification.

Input Format

Input will contain only N.
Constraints

1 <= N <= 100
Output Format

Output the pattern.
Sample Input 0

4
Sample Output 0

   #
  ---
 #####
-------
 #####
  ---
   #
Sample Input 1

1
Sample Output 1

#
Sample Input 2

7
Sample Output 2

      #
     ---
    #####
   -------
  #########
 -----------
#############
 -----------
  #########
   -------
    #####
     ---
      #
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (i % 2 == 1) {
               
                printf("#");
            } else {
               
                printf("-");
            }
        }
        
        printf("\n");
    }

    for (int i = N - 1; i >= 1; i--) {
       
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
     
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (i % 2 == 1) {
                
                printf("#");
            } else {
                
                printf("-");
            }
        }
        
        printf("\n");
    }

    return 0;
}


