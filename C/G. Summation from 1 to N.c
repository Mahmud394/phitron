#include<stdio.h>
int main ()
{
    long long int a;
   long long  int sum;
    scanf("%lld",&a);
    for(int i=1;i<+a;i++)
    {
        sum= a*(a+1)/2;

    }
    printf("%lld",sum);
}