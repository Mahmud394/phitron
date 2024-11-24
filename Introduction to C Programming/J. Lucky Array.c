#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   int mi=arr[0];
   int odd;
   for(int i=0;i<n;i++)
    {
       
       if(arr[i]<mi)
       {
        mi=arr[i];
        
       }
       
    }
   // printf("%d\n",mi);
    for(int i=0;i<n;i++)
    {
       
       if(arr[i]==mi)
       {
        odd++;
        
       }
       
    }

    if(odd%2!=0)
       {
        printf("Lucky");

       }
       else{
        printf("Unlucky");
       }

}