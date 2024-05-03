#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int reverse=0;
    int rem;
    int real=n;
    while (n != 0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    if (reverse == real)
    {
        printf("%d\n",reverse);
        printf("YES");
    }
    else
    {
        printf("%d\n",reverse);
        printf("NO");
    }
    return 0;
}