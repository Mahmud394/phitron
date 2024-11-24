/*
Problem Statement

You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.

Input Format

First line will contain T, the number of test cases.
Each test case will contain only S.
Constraints

1 <= T <= 1000
1 <= |S| <= 10000; Here |S| means the length of S.
Output Format

Output the count of capital alphabets first, then the count of small alphabets then the count of digits. Don't forget to put a new line after each test case.
Sample Input 0

2
theFox25IsBrave
ILoveYou100TimesAndSay2Also
Sample Output 0

3 10 2
7 16 4
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int cont_A=0;
    int cont_a=0;
    int cont_digit=0;
    for(int i=0;i<n;i++)
    {
       char ch[10000];
        int cont_A=0;
    int cont_a=0;
    int cont_digit=0;
        scanf("%s",ch);
        int i=0;
        while(ch[i]!='\0')
        {
            if(ch[i]>='a' && ch[i]<='z')
            {
                cont_a++;
            }
            
            else if (ch[i]>='A' && ch[i]<='Z')
            {
                cont_A++;
            }
            else if(ch[i]>='0' && ch[i]<='9')
            {
                cont_digit++;       
            }
                i++;
        }
        printf("%d %d %d\n",cont_A,cont_a,cont_digit);
    }
}
