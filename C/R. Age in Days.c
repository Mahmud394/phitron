#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int year;
    int month;
    int days;
      year=n/365;
      month=n%365/30;
      days=n%365%30;

 
    printf("%d years\n",year);
    printf("%d months\n",month);
    printf("%d days\n",days);


}