#include<stdio.h>
int main()
{
    long long n,m,x,s,b,i,j;
    scanf("%I64d %I64d",&n,&m);
    long long a[m];
    for(i=0;i<m;i++)
    {
        scanf("%I64d",&a[i]);
    }
    x=a[0]-1;
    for(i=0;i<m-1;i++)
    {
        if(a[i+1]>=a[i]) {x+=a[i+1]-a[i];}
        else {x+=n+a[i+1]-a[i];}
    }
    printf("%I64d\n",x);
    return 0;
}
//#include<stdio.h>
//int main()
//{
//    long long n,m,i,x=0,s=0;
//    scanf("%I64d %I64d",&n,&m);
//    long long a[m];
//    for(i=0;i<m;i++)
//    {
//        scanf("%I64d",&a[i]);
//    }
//    for(i=0;i<m-1;i++)
//    {
//        if(a[i+1]<a[i]){s++;}
//    }
//    printf("%I64d\n",n*s+a[m-1]-1);
//    return 0;
//}
