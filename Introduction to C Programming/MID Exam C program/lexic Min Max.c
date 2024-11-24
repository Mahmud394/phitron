/*You have already solved a problem where you had to find minimum and maximum value among 3 integer numbers.

Now you will be given 3 strings you have to find lexicographically minimum and maximum string among them.

Input Format

The first line will contain 3 strings, S1, S2, S3 containing only lowercase letters.

Constraints

1 <= |S1|, |S2|, |S3| <= 1000

Output Format

In the first line print the lexicographically minimum string.

In the second line print the lexicographically maximum string.

Sample Input 0

abc def ghi
Sample Output 0

abc
ghi

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s1[1000],s2[1000],s3[1000];
    char min_str[1000],max_str[1000];
    
   scanf("%s %s %s",s1,s2,s3);
    strcpy(min_str,s1);
    strcpy(max_str,s1);
    if(strcmp(s2,min_str)<0)
    {
        strcpy(min_str,s2);
    }
    if(strcmp(s2,max_str)>0)
    {
        strcpy(max_str,s2);
    }
    if(strcmp(s3,min_str)<0)
    {
        strcpy(min_str,s3);
    }
    if(strcmp(s3,max_str)>0)
    {
        strcpy(max_str,s3);
    }
    
    printf("%s\n",min_str);
    printf("%s\n",max_str);
    
    
   
}
