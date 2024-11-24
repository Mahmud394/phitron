#include<stdio.h>
#include<string.h>

int main ()
{
    char ch[10000001];
    int count[26]={0};
    scanf("%s",ch);
    int len = strlen(ch);
    for(int i=0;i<len;i++)
    {
        count[ch[i]-'a']++;
    }
    for (char ch = 'a'; ch <= 'z'; ch++) {
        int index = ch - 'a';
        if (count[index] > 0) {
            printf("%c : %d\n", ch, count[index]);
        }
    }

}