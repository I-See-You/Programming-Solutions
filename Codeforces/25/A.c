#include<stdio.h>
int main()
{
    int n,i,odd=0,even=0,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]%2) {odd++;}
        else {even++;}
    }
    if(even>odd) {x=1;}
    for(i=0;i<n;i++)
    {
        if(a[i]%2==x) {printf("%d\n",i+1);break; }
    }
    return 0;
}
