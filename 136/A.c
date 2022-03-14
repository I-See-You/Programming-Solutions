#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n+1],b[n+1];
    for(i=1;i<=n;i++) {scanf("%d",&a[i]); }
    for(i=1;i<=n;i++)
    {
        b[a[i]]=i;
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",b[i]);
    }
}
