#include<stdio.h>
int main ()
{
    while(1)
    {
        int a,b;
        int temp;
        int sum=0;
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;

        }
        if(a<=0 || b<=0)
        {
            break;
        }
        for(int i=a;i<=b;i++)
        {
            printf("%d ",i);
            sum+=i;
        }
        printf("sum =%d\n",sum);
    }
}