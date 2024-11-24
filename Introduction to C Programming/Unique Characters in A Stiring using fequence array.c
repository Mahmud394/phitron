#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100]="apple";
    int len=strlen(str);
    int f[26]={0};
    for(int i=0;i<len;i++)
    {
        char ch = str[i];
        int index =ch - 'a';
        f[index]=1;
    }
    int count=0;
    for(int i=0;i<26;i++)
    {
        count +=f[i];
        //printf("%c %d",i + 'a',f[i]);

        if(f[i]==1)
        {
            printf("%c %d\n",i + 'a',f[i]);
        }

    }
    printf("%d\n",count);
}
