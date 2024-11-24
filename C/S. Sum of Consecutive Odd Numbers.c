#include<stdio.h>
int main ()
{
    int t;
    scanf("%d",&t);
    for(int k=1;k<=t;k++){
    int a,b;
      int sum=0;
    int temp;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        temp = a;
        a=b;
        b=temp;
    }
    for(int i=a+1;i<b;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
            
        }
    }
    
      printf("%d\n",sum);
    }

}