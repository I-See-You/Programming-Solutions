#include<stdio.h>
int main()
{
    int n,i,j,a[5][5],x,y;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){x=i;y=j;}
        }
    }
    x=2-x; if(x<0)x=-x;
    y=2-y; if(y<0)y=-y;
    n=x+y;
    printf("%d\n",n);
    return 0;
}
