#include<stdio.h>
int main ()
{
    long long  n;
    scanf("%lld",&n);
    long long int sum;
    long long int st1=n;
    long long int nd2=n+1;
    sum=st1*nd2/2;
    printf("%lld",sum);
    return 0;
}