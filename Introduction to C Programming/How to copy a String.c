#include<stdio.h>
#include<string.h>
int main ()
{
    char a[10]="hi";
    char b[10];
    int len = strlen(a);
    printf("%s \n",a);
     for(int i=0;i<len;i++)
     {
        b[i]=a[i];
     }
    b[len]='\0';
     printf("%s %s",a,b);

    // strcpy(b,"hello");
    // printf("%s",b);
    // printf("%s\n",a);

    // strcpy(b,a);

    // printf("%s %s",a,b);
}