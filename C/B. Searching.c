#include<stdio.h>
int main ()
{
   int n;
    scanf("%d",&n);
   long long int arr[n];
    int index=-1;
   long long int indx;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    scanf("%lld",&indx);
    for(int i=0;i<n;i++)
    {
        if(indx==arr[i])
        {
            index=i;
            break;
        }
    }
    if(index==-1)
        {
            printf("-1");
        }
        else{
    printf("%d",index);
        }
 
}