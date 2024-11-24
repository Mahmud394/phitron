#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        long long int a;
        long long int fact=1;
        scanf("%lld",&a);
        for(int i=1;i<=a;i++)
        {
            fact*=i;
        }
        printf("%lld\n",fact);
    }

}