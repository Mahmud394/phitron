#include<stdio.h>
void print_Digit(long long int n)

{
    if(n==0)
    {
       
        return;
    }
    long long int digit = n%10;
    //printf("%lld ",digit); start to the back
    print_Digit(n/10);
    printf("%lld ",digit);
}
int main ()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int n;
        scanf("%lld",&n);
        if(n==0)
    {
        printf("0");
        
    }

        print_Digit(n);
        printf("\n");
    }
}