#include<stdio.h>
int main ()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a ,&b ,&c ,&d);
    long long int mul;
    if (999 < a || 999 < b || 999 < c || 999< d)
    {
        mul=((a%100)*(b%100)*(c%100)*(d%100));
    }
    else
    {
        mul=a*b*c*d;
    }
    int first;
    first=mul%10;
    long long int mm=mul/10;
    int secont;
    secont=mm%10;
    printf("%d%d",secont,first);
    return 0;
}