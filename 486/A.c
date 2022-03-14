#include<stdio.h>
int main()
{
    long long int n;
    scanf("%I64d",&n);
    if(n==1) printf("-1");
    else {
        if(n%2==1) printf("-%I64d",(n+1)/2);
        else printf("%I64d",(n+1)/2);
        }
    return 0;
}
