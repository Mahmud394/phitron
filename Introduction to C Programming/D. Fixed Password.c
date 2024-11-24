#include<stdio.h>
int main ()
{
    // int a;
    // while(scanf("%d",&a) != EOF){}
    //ctrl+z
    while(1)
    {
        int a;
        scanf("%d",&a);
        if(a==1999)
        {
            printf("Correct");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
}