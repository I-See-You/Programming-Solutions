#include<stdio.h>
int main()
{
    int n,a[12],i,j,s=0,x,y=1;
    scanf("%d",&n);
    for(i=0;i<12;i++){scanf("%d",&a[i]); }
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    //for(i=0;i<12;i++) {printf("%d ",a[i]);}
    if(n==0) {printf("0\n");y=0; }
    else
    {
        for(i=0;i<12;i++)
        {
            s+=a[i];
            //printf("%d\n",s);
            if(s>=n) {printf("%d\n",i+1);y=0;break;}
        }
    }
    if(y){printf("-1\n"); }

    return 0;
}
