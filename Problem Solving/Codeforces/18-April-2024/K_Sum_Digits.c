#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        char digit;
        scanf(" %c",&digit);
        sum+=digit-48;
    }
    printf("%d",sum);
    return 0;
}