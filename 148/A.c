#include<stdio.h>
int main()
{
    int k,l,m,x,n,i,j,s=0;
    scanf("%d %d %d %d %d",&k,&l,&m,&x,&n);
    int a[n],b[4];
    for(i=0;i<n;i++){a[i]=0;}
    b[0]=k;b[1]=l;b[2]=m,b[3]=x;
    for(j=0;j<4;j++)
    {
            for(i=1;i<=n;i++)
            {
                if(i%b[j]==0){a[i-1]=1;}
            }
    }
    for(i=0;i<n;i++){if(a[i]) s++;}
    printf("%d\n",s);
    return 0;
}
