#include<stdio.h>
int main ()
{
    int n,m,c=-1;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++)
    {
       int x=i;
       int y=0;

      while(x)
      {

          if(x%10!=7 && x%10!=4)

              y++;
              x=x/10;
      }
      if(y==0)
          {
              printf("%d ",i);
              c++;
          }
    }
    if(c==-1)
    {
        printf("-1\n");
    }
}

