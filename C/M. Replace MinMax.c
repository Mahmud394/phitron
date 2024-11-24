#include<stdio.h>
//#include <limits.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   int mx= 0;
   int mi=0;
   int temp;
   for(int i=0;i<n;i++)
    {
       if(arr[i]>arr[mx])
       {
        mx=i;
       }
       if(arr[i]<arr[mi])
       {
        mi=i;
       }
    }
    temp=arr[mx];
       arr[mx] =arr[mi];
        arr[mi]=temp;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    
    // int minE=INT_MAX;
    // int maxE=INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]<minE)
    //     {
    //         minE=arr[i];
           
    //     }
    //     if(arr[i]>maxE){
    //         maxE=arr[i];
    //     }
    //     printf("%d",maxE);
    //     printf("%d",minE);
    // }
}