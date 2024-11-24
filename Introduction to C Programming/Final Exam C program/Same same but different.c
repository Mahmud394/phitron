/*
You will be given 3 strings each of same length consisting of only small case letters. In one operation you can change a letter to any other letter of one of the strings.

You have to find out the minimum number of operations to make all 3 strings same.

Input Format

The input will contain 3 Strings.

Constraints

1 <= Length of each string <= 100

Output Format

Print an integer, the minimum number of operations to make the strings same.

Sample Input 0

train
candy
bread
Sample Output 0

9
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char c[100],d[100],e[100];
    gets(c);
    gets(d);
    gets(e);
    int n = strlen(c);
    int min_operations = 0; 
    for (int i = 0; i < n; i++) {
        
        char c1 = c[i];
        char c2 = d[i];
        char c3 = e[i];
         if (c1 != c2 && c2 != c3 && c1 != c3) {
            min_operations += 2;
        }
        
        else {
            min_operations += 1;
        }
    }
    
         printf("%d\n", min_operations);
    
}
