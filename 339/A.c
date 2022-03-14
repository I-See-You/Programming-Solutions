#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l,sl,j,s=0,k=0;
    char a[1000];
    scanf("%s",&a);
    l=strlen(a);
    int b[l];
    for(i=0;i<l;i++)
    {
        if(a[i]!='+'){b[k++]=a[i]-48;}
    }
    //printf("%d %d %d\n",b[0],b[1],b[2]);
    for(i=1;i<4;i++)
    {
        for(j=0;j<k;j++)
        {
            if(b[j]==i) {printf("%d",b[j]);s++;if(s<k){printf("+");}}
        }
    }
    return 0;
}
