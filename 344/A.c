#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
        if(a[i]!=a[i+1]) s++;
    printf("%d\n",s+1);
    return 0;
}
