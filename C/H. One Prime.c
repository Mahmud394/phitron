#include<stdio.h>
int main ()
{
    long long int a;
   long long  int count=0;
    scanf("%lld",&a);
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            count++;
            break;
        }

    }
     if(count==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}