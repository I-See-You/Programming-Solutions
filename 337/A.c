#include<stdio.h>
int main()
{
    int m,n,i,j,s=1000,x;
    scanf("%d %d",&m,&n);
    int a[n];
    for(i=0;i<n;i++){scanf("%d",&a[i]); }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    for(i=0;i<=n-m;i++)
    {
        if(s>(a[i+m-1]-a[i]))
        {
            s=a[i+m-1]-a[i];
        }
    }
    if(n==m){printf("%d\n",a[m-1]-a[0]); }
    else printf("%d\n",s);
    return 0;
}
