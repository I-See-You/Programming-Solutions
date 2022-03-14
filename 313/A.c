#include<stdio.h>
int main()
{
    long long n,i,j,s=0,a,b,c;
    scanf("%I64d",&n);
    a=n%10;
    b=(n/10)%10;
    c=(n/100)*10;
    if(b>a) a=b;
    if(n>=0)
        printf("%I64d",n);
    else
        printf("%I64d\n",c+a);
    return 0;
}
