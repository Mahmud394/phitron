#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=0, j=n-1;i<n;i++,j--)
    {
            arr2[j]=arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
}
