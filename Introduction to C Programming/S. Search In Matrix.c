#include<stdio.h>
int main ()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            

        }
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==k)
            {
                sum=1;
                break;
            }
        }
        if(sum)
        {
            break;
        }
    }
    if(sum)
    {
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
    
}