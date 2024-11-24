#include<stdio.h>
int main ()
{
    int a;
    int k= 1;
    scanf("%d",&a);
    for(int i=1;i<=a;i++,k+=2)
    {
        int sp=a-i;
        while(sp--){
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    k-=2;
    for(int i=a;i>=1;i--,k-=2)
    {
        int sp=a-i;
        while(sp--){
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}