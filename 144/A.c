#include<stdio.h>
int main()
{
    int n,min,max,i,j,px,pm,x,y,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++)
        if(min>a[i]) min=a[i];
    for(i=1;i<n;i++)
        if(max<a[i]) max=a[i];
        //printf("%d %d",min,max);
    for(i=0;i<n;i++)
        if(min==a[i]) pm=i;
    for(i=0;i<n;i++)
        if(max==a[i]) {px=i;break;}
    x=n-1-pm;
    y=px;
    s=x+y;
    if(px>pm) s--;
    printf("%d\n",s);
    return 0;
}
