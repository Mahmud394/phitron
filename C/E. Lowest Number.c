#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    int mi =a[0];
    int indx = -1;
     for(int i=1;i<n;i++)
                {
           if(mi>a[i])
            {
               mi=a[i];
            }
           for(int i=0;i<n;i++)
            {
            if(mi==a[i])
            {
            indx =i+1;
            break;
            }

           }
          }
          printf("%d %d",mi,indx);
}
