#include<stdio.h>
#include<string.h>
int main ()
{
    char a[30];
    char b[30];
    scanf("%s",a);
    scanf("%s",b);
    char min_str[30];
    strcpy(min_str,a);
    if(strcmp(b,min_str)<0)
    {
        strcpy(min_str,b);
    }
    printf("%s",min_str);

}