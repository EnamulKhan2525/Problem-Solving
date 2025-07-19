#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int year=n/365;
    int m=n%365;
    int months=m/30;
    int d=m%30;
    int days=d/1;
    printf("%d years\n",year);
    printf("%d months\n",months);
    printf("%d days",days);
    return 0;
}