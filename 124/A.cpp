#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if(a+b+1<n) printf("%d\n",b+1);
    else printf("%d\n",n-a);
    return 0;
}
