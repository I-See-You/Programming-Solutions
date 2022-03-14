#include<stdio.h>
int main()
{
    int n,k,i,sum=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for (i=0;i<n;i++) {scanf("%d",&a[i]);}
    for(i=0;i<k;i++)
    {
        if(a[i]<=0) {break;}
        sum++;
    }
    if(a[k]>0)
    {
        for(i=k-1;i<n;i++)
           if(a[i+1]<=0||a[i]!=a[i+1]) {break;}
           else if(a[i]==a[i+1]) sum++;
    }
    printf("%d",sum);
    return 0;
}
