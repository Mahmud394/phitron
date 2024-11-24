#include<stdio.h>
int main ()
{
     long long int n,count,num;
    scanf("%lld",&n);
    for( num=1;num<=n;num++)
    {
        count = 0;
       for(int i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
       }
        if(count == 0 && num!= 1){
        printf("%lld ",num);
        }

    }
}