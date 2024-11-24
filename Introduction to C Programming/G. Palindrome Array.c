#include<stdio.h>
int main ()
    {
        long long int n;
        scanf("%lld",&n);
       long long int arr1[n],arr2[n];
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&arr1[i]);
        }
         for(int i=0, j=n-1;i<n;i++,j--)
    {
            arr2[j]=arr1[i];
    }
         for(int i=0;i<n;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            printf("NO");
            //break;
             return 0;
        }
        // else 
        // {
        //         printf("YES");
        //         break;
        // }
        }
        printf("YES");


    }