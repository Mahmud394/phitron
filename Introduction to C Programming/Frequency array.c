#include<stdio.h>
int main ()
{
    int n;
    //array size
    scanf("%d",&n);
    int a[n+5];
    //array input
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //fequence array =0
    int f[100000]={0};
    //array 'a' er value gola k 1 
    for(int i=0;i<n;i++)
    {
        f[a[i]]=1;
    }
    // print array with index , je gola paise oi gola 1 r valo baki gola 0

    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",i,f[i]);
    }
   // printf("%d",f[4]);

    int m;
    scanf("%d",&m);
    //input value
    for(int i=0;i<m;i++)
    {
        int x;
        scanf("%d",&x);
        printf("%d ",x);

        if(f[x]==1)
        {
            printf("ache\n");
        }
        else{
            printf("Nai\n");
        }
    }

}