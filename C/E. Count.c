#include<stdio.h>
#include<string.h>
int main ()
{
    char ch[1000000];
    scanf("%s",ch);
    int len = strlen(ch);
    int sum=0;
    for(int i=0;i<len;i++){
    int a= ch[i] - '0';
    sum+=a;

}
printf("%d",sum);
}
