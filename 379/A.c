#include<stdio.h>
int main()
{
    int n,i,x,y,sum=0;
    scanf("%d %d",&x,&y);
    sum=x;
    for(i=0;;i++)
    {
        //x=x/y;
        sum=sum+x/y;
        if(x/y==0){break;}
        x=x/y+(x%y);
    }
    printf("%d\n",sum);
    
    return 0;
}
