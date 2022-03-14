#include<stdio.h>
int main()
{
    int n,m,i,s=0,j=0,a,b,x,y,p=1,k=1;
    scanf("%d %d",&n,&m);
    a=m;
    b=a;
    while(1)
    {
        if(a>n){break;}
        m=a;
        while(m!=-1)
        {
            x=m*2;
            y=a-m;
            if(n==x+y){p=0;printf("%d\n",a);break;}
            m--;
        }
        if(p==0){break;}
        a=b*++k;
    }
    if(p) printf("-1\n");
    return 0;
}
