/*
Abul is angry, last time he went to eat with Babul and Bablu, he had to pay more than them as the bill was not divisible by three.

Now he wants to know which numbers from 1 to N is divisible by 3. Also he has 2 more friends so in case they all 5 go to eat some where, he needs to know which numbers from 1 to N are divisible by 5 as well.

He knows you are a programmer, so he wants your help. He will tell you a number N, you have tell him which numbers are divisible by 3 or 5 from 1 to N.

Input Format

Input will contain one integer N
Constraints

1 <= N <= 5000

Output Format

Print integers 1 to N each in a separate line and for each of them print "Yes" if it's divisible by 3 or 5 and "No" other wise. Print a space between the integer and the text.
Sample Input 0

15
Sample Output 0

1 No
2 No
3 Yes
4 No
5 Yes
6 Yes
7 No
8 No
9 Yes
10 Yes
11 No
12 Yes
13 No
14 No
15 Yes

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%3==0 || i%5==0)      
        {
           printf("%d Yes\n",i); 
        }
        else
        {
            printf("%d No\n",i);
        }
    }
    return 0;
}
