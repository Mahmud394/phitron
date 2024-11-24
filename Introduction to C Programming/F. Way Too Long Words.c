#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    char str[100];
    scanf("%d",&n);
   for(int i=0;i<n;i++)
    {
        // gets(str);
        scanf("%s",str);
        int len=strlen(str);
        if(len<=10)
        {
            puts(str);
        }
        else if(len>10){
            // puts(str[0]);
            // printf("%d",len-2);
            // puts(str[len-1);
            printf("%c%d%c\n",str[0],len-2,str[len-1]);

        }
        
    }
}