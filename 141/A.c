#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101],c[202];
    scanf("%s",&a);
    scanf("%s",&b);
    scanf("%s",&c);
    int la,lb,lc,i,j,x[26],y[26],n=1;
    la=strlen(a);lb=strlen(b);lc=strlen(c);
    for(i=0;i<26;i++){x[i]=0;y[i]=0; }
    for(i=0;i<la;i++)
    {
        for(j=0;j<26;j++)
        {
            if(j+65==a[i]){x[j]++;}
        }
    }
    for(i=0;i<lb;i++)
    {
        for(j=0;j<26;j++)
        {
            if(j+65==b[i]){x[j]++;}
        }
    }
    for(i=0;i<lc;i++)
    {
        for(j=0;j<26;j++)
        {
            if(j+65==c[i]){y[j]++;}
        }
    }
    for(i=0;i<26;i++)
    {
        if(x[i]!=y[i]){n=0;break;}
    }
    if(n) printf("YES\n");
    else printf("NO\n");
    return 0;
}
