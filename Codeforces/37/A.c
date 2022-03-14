#include<stdio.h>
int main()
{
    int n,i,s=0,max=0;
    scanf("%d",&n);
    int a[n],b[1000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<1000;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        b[a[i]-1]++;
    }

    for(i=0;i<1000;i++)
    {
        if(max<b[i]) max=b[i];
        if(b[i]>0) s++;
    }
    printf("%d %d\n",max,s);
    return 0;
}
