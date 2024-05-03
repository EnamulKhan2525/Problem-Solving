#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d  %d",&a ,&b);
    int fl= a/b;
    int ce;
    int ro=0;
    float f1=a;
    float f2=b;
    float flo=f1/f2;
    if (fl<flo)
    {
        ce=a/b+1;
    }
    else
    {
        ce=fl;
    }
    if (flo < fl+.5)
    {
        ro=fl;
    }
    else if (fl+.5 <= flo)
    {
       ro=fl+1;
    }
    printf("floor %d / %d = %d\n",a ,b ,fl);
    printf("ceil %d / %d = %d\n",a ,b ,ce);
    printf("round %d / %d = %d\n",a ,b ,ro);
    return 0;
}