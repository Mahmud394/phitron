#include<stdio.h>
int main()
{
    int a,c;
    char b;
    scanf("%d %c %d",&a,&b,&c);
    if(b=='<')
    {
        if(a<c)
        {
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        }
    }
   else if(b=='>')
    {
        if(a>c)
        {
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        }
    }
    else
    {
        if(a==c)
        {
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        }
    }
    
    
}