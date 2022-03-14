#include<stdio.h>
int main()
{
    long long n,s;
    scanf("%I64d",&n);
    s=n+(n*n*(n-1))/2-(n*(n-1)*(2*n-1))/6;
    printf("%I64d\n",s);
    return 0;
}
