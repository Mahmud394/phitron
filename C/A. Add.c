#include<stdio.h>
int add(long long int a,long long int b)
{
    long long int sum = a+b;
    return sum;
}
int main ()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int result = add(a,b);
    printf("%lld",result);

}